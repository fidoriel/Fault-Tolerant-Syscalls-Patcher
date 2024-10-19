#include <linux/init.h>
#include <linux/module.h>
#include <linux/kallsyms.h>
#include <linux/mm.h>
#include <linux/mman.h>
#include <linux/syscalls.h>

#include "kln_patch.h"
#include "cr0_patch.h"
#include <linux/kernel.h>
#include <asm/unistd_64.h>

#define SYSCALL_TO_OVERWRITE __NR_chdir
unsigned long *sys_call_table_ref = NULL;
char *sym_name = "sys_call_table";

asmlinkage long (*original_call) (unsigned int fd);

int syscalls = 0;

MODULE_LICENSE("GPL");
MODULE_AUTHOR("fidoriel");
MODULE_DESCRIPTION("A kernel module to overwrite a syscall in sys_call_table");

static asmlinkage long my_close(unsigned int fd)
{
    // Your custom code, e.g., logging or triggering a panic
    printk("Close syscall intercepted!");
    syscalls++;

    // Call the original close function to maintain the expected behavior
    return (*original_call)(fd);
}


static int __init hello_init(void)
{
    pr_info("Initializing module\n");

    kln_p kallsyms_lookup_name = get_kln_p();
    if (!kallsyms_lookup_name) {
        pr_err("Failed to get kallsyms_lookup_name\n");
        return -EINVAL;
    }

    sys_call_table_ref = kallsyms_lookup_name(sym_name);
    if (!virt_addr_valid(sys_call_table_ref)) {
        pr_err("Invalid sys_call_table address\n");
        return -EINVAL;
    }

    pr_info("Valid sys_call_table address = 0x%lx\n", sys_call_table_ref); // must match cat /proc/kallsyms | grep sys_call_table

    original_call = sys_call_table_ref[SYSCALL_TO_OVERWRITE];
    if (!original_call) {
        pr_err("Failed to get original open syscall\n");
        return -EINVAL;
    }

    pr_info("Original Call address = 0x%lx\n", original_call); // must match cat /proc/kallsyms | grep __x64_sys_open
    pr_info("Wrapper Call address = 0x%lx\n", my_close);

    unprotect_memory();
    sys_call_table_ref[SYSCALL_TO_OVERWRITE] = my_close;
    protect_memory();

    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE]);

    return 0; // Success
}

static void __exit hello_exit(void)
{
    pr_info("Exiting module\n");
    pr_info("Reverting 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE]);

    unprotect_memory();
    sys_call_table_ref[SYSCALL_TO_OVERWRITE] = original_call;
    protect_memory();

    pr_info("to 0x%lx\n", original_call);

    pr_info("sys call table changes reverted\n");
    pr_info("Was %d times used\n", syscalls);
}

module_init(hello_init);
module_exit(hello_exit);
