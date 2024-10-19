#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kallsyms.h>
#include <linux/syscalls.h>
#include <asm/unistd.h>
#include "kln_patch.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("Print System Call Table");

#define NUM_SYSCALLS 10  // Adjust this for your system if needed
char *sym_name = "sys_call_table";
unsigned long **sys_call_table_ref2;

static int __init syscalls_init(void) {
    int i;

    kln_p kallsyms_lookup_name = get_kln_p();
    sys_call_table_ref2 = kallsyms_lookup_name(sym_name);
    if (!sys_call_table_ref2) {
        return -1;
    }

    pr_info("System Call Table Entries:\n");

    /* Print each syscall entry */
    for (i = 0; i < NUM_SYSCALLS; i++) {
        pr_info("Syscall %d: Address: %px\n", i, *sys_call_table_ref2[i]);
    }

    return 0;
}

static void __exit syscalls_exit(void) {
    pr_info("Exiting module and finished printing syscall table.\n");
}

module_init(syscalls_init);
module_exit(syscalls_exit);
