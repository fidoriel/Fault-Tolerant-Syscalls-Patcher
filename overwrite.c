#include <linux/init.h>
#include <linux/module.h>
#include <linux/kallsyms.h>
#include <linux/mm.h>
#include <linux/mman.h>
#include <linux/syscalls.h>

// patch start
#include <linux/unistd.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kprobes.h>

// added by me
#include "patch.h"

#define KPROBE_PRE_HANDLER(fname) static int __kprobes fname(struct kprobe *p, struct pt_regs *regs)
typedef unsigned long (*kln_p)(const char*);
long unsigned int kln_addr = 0;
unsigned long (*kln_pointer)(const char* name) = NULL;

static struct kprobe kp0, kp1;

KPROBE_PRE_HANDLER(handler_pre0) {
    kln_addr = (--regs->ip);

    return 0;
}

KPROBE_PRE_HANDLER(handler_pre1) {
    return 0;
}

static int do_register_kprobe(struct kprobe* kp, char* symbol_name, void* handler) {
    int ret;

    kp->symbol_name = symbol_name;
    kp->pre_handler = handler;

    ret = register_kprobe(kp);
    if (ret < 0) {
        pr_err("do_register_kprobe: failed to register for symbol %s, returning %d\n", symbol_name, ret);
        return ret;
    }

    pr_info("Planted krpobe for symbol %s at %p\n", symbol_name, kp->addr);

    return ret;
}

// this is the function that I have modified, as the name suggests it returns a pointer to the extracted kallsyms_lookup_name function
kln_p get_kln_p(void) {
    int status;

    status = do_register_kprobe(&kp0, "kallsyms_lookup_name", handler_pre0);

    if (status < 0) return NULL;

    status = do_register_kprobe(&kp1, "kallsyms_lookup_name", handler_pre1);

    if (status < 0) {
        // cleaning initial krpobe
        unregister_kprobe(&kp0);
        return NULL;
    }

    unregister_kprobe(&kp0);
    unregister_kprobe(&kp1);

    pr_info("kallsyms_lookup_name address = 0x%lx\n", kln_addr);

    kln_pointer = (unsigned long (*)(const char* name)) kln_addr;

    return kln_pointer;
}

// patch end

MODULE_LICENSE("GPL");
char *sym_name = "sys_call_table";

typedef asmlinkage long (*sys_call_ptr_t)(const struct pt_regs *);
typedef asmlinkage long (*custom_open) (const char __user *filename, int flags, umode_t mode);
static sys_call_ptr_t *sys_call_table_ref;

custom_open original_call;

static asmlinkage long my_open(const char __user *filename, int flags, umode_t mode)
{
    pr_info("%s\n",__func__);
    pr_info("opened file");
    return original_call(filename, flags, mode);
}

static int __init hello_init(void)
{
    pr_info("Initializing module\n");

    kln_p kallsyms_lookup_name = get_kln_p();
    if (!kallsyms_lookup_name) {
        pr_err("Failed to get kallsyms_lookup_name\n");
        return -EINVAL;
    }

    sys_call_table_ref = (sys_call_ptr_t *)kallsyms_lookup_name(sym_name);
    if (!sys_call_table_ref) {
        pr_err("Failed to get sys_call_table\n");
        return -EINVAL;
    }
    pr_info("sys_call_table address = 0x%p\n", sys_call_table_ref);

    original_call = (custom_open)sys_call_table_ref[__NR_open];
    if (!original_call) {
        pr_err("Failed to get original open syscall\n");
        return -EINVAL;
    }

    write_cr0(read_cr0() & (~0x10000)); // Disable write protection
    sys_call_table_ref[__NR_open] = (sys_call_ptr_t)my_open;
    write_cr0(read_cr0() | 0x10000); // Re-enable write protection

    pr_info("sys call table overwritten\n");

    return 0; // Success
}

static void __exit hello_exit(void)
{
    pr_info("Exiting module\n");

    write_cr0(read_cr0() & (~0x10000)); // Disable write protection
    sys_call_table_ref[__NR_open] = (sys_call_ptr_t)original_call;
    write_cr0(read_cr0() | 0x10000); // Re-enable write protection

    pr_info("sys call table changes reverted\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple kernel module to overwrite sys_call_table");
