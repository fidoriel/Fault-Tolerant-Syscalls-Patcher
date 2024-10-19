#include <linux/init.h>
#include <linux/module.h>
#include <linux/kallsyms.h>
#include <linux/mm.h>
#include <linux/mman.h>
#include <linux/syscalls.h>

#include "kln_patch.h"
#include "cr0_patch.h"
#include <linux/kernel.h>


#define SYSCALL_TO_OVERWRITE __NR_mkdir
unsigned long *sys_call_table_ref = NULL;
char *sym_name = "sys_call_table";

asmlinkage long (*original_call) (const char __user *filename, int flags, umode_t mode);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("fidoriel");
MODULE_DESCRIPTION("A kernel module to overwrite a syscall in sys_call_table");

static asmlinkage long my_open(const char __user *filename, int flags, umode_t mode)
{
    panic("my message");

    printk(KERN_ALERT "my_open called!\n");     // Higher priority
    pr_err("my_open called via pr_err!\n");     // Error level logging
    pr_alert("my_open called via pr_alert!\n"); // Alert level logging

    return (*original_call)(filename, flags, mode);
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

    pr_info("Valid sys_call_table address = 0x%lx\n", sys_call_table_ref);

    original_call = sys_call_table_ref[SYSCALL_TO_OVERWRITE];
    if (!original_call) {
        pr_err("Failed to get original open syscall\n");
        return -EINVAL;
    }

    pr_info("Original Call address = 0x%lx\n", original_call);

    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE-1]);
    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE]);
    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE+1]);

    unprotect_memory();
    sys_call_table_ref[SYSCALL_TO_OVERWRITE] = (unsigned long *)my_open;
    protect_memory();

    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE]);


    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE-1]);
    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE]);
    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE+1]);

    return 0; // Success
}

static void __exit hello_exit(void)
{

    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE-1]);
    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE]);
    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE+1]);


    pr_info("Exiting module\n");
    pr_info("Reverting 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE]);

    unprotect_memory();
    sys_call_table_ref[SYSCALL_TO_OVERWRITE] = original_call;
    protect_memory();

    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE-1]);
    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE]);
    pr_info("New call adress = 0x%lx\n", sys_call_table_ref[SYSCALL_TO_OVERWRITE+1]);

    pr_info("to 0x%lx\n", original_call);

    pr_info("sys call table changes reverted\n");
}

module_init(hello_init);
module_exit(hello_exit);
