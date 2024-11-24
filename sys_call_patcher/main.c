#include <linux/init.h>
#include <linux/kallsyms.h>
#include <linux/mm.h>
#include <linux/mman.h>
#include <linux/module.h>
#include <linux/syscalls.h>
#include <linux/delay.h>

#include "cr0_patch.h"
#include "kln_patch.h"
#include <asm/unistd_64.h>
#include <linux/kernel.h>

#define SYSCALL_TO_OVERWRITE __NR_mmap
unsigned long *sys_call_table_ref = NULL;
char *sym_name = "sys_call_table";

asmlinkage long (*original_call)(struct pt_regs *params);

int num_used = 0;

MODULE_LICENSE("GPL");
MODULE_AUTHOR("fidoriel");
MODULE_DESCRIPTION("A kernel module to overwrite a syscall in sys_call_table");

int retry_intervals[] = {10, 100, 1000};

asmlinkage long syscall_wrapper(struct pt_regs *params) {
  long einval = original_call(params);

  if (einval < 0) {
    pr_info("[sys_call_patcher] SysCall Failed. Going to Retry.\n");
  
    msleep(250);
    einval = original_call(params);
    if (einval < 0) {
      pr_info("[sys_call_patcher] Retry Failed.\n");
    }
    else {
      pr_info("[sys_call_patcher] Retry Success.\n");
    }

    // size_t i = 0; 
    // for (i < 3; i++;)
    // {
    //   pr_info("[sys_call_patcher] %d Retry\n", i+1);
    //   // msleep(retry_intervals[i]);
    //   einval = original_call(params);
    //   if (einval < 0) {
    //     pr_info("[sys_call_patcher] %d Retry Failed.\n", i+1);
    //   }
    //   else {
    //     pr_info("[sys_call_patcher] %d Retry Successful.\n", i+1);
    //     break;
    //   }
    // }
  }
  
  // else {
  //     pr_info("[sys_call_patcher] Used %ld\n", einval);
  // }
  
  return einval;
}

static int __init hello_init(void) {
  pr_info("[sys_call_patcher] Initializing module\n");

  kln_p kallsyms_lookup_name = get_kln_p();
  if (!kallsyms_lookup_name) {
    pr_err("[sys_call_patcher] Failed to get kallsyms_lookup_name\n");
    return -EINVAL;
  }

  sys_call_table_ref = kallsyms_lookup_name(sym_name);
  if (!virt_addr_valid(sys_call_table_ref)) {
    pr_err("[sys_call_patcher] Invalid sys_call_table address\n");
    return -EINVAL;
  }

  pr_info("[sys_call_patcher] Valid sys_call_table address = 0x%lx\n",
          sys_call_table_ref); // must match cat /proc/kallsyms | grep
                               // sys_call_table

  original_call = sys_call_table_ref[SYSCALL_TO_OVERWRITE];
  if (!original_call) {
    pr_err("[sys_call_patcher] Failed to get original open syscall\n");
    return -EINVAL;
  }

  pr_info("[sys_call_patcher] Original Call address = 0x%lx\n",
          original_call); // must match cat /proc/kallsyms | grep __x64_sys_open
  pr_info("[sys_call_patcher] Wrapper Call address = 0x%lx\n", syscall_wrapper);

  unprotect_memory();
  sys_call_table_ref[SYSCALL_TO_OVERWRITE] = syscall_wrapper;
  protect_memory();

  pr_info("[sys_call_patcher] New call adress = 0x%lx\n",
          sys_call_table_ref[SYSCALL_TO_OVERWRITE]);

  return 0; // Success
}

static void __exit hello_exit(void) {
  pr_info("[sys_call_patcher] Exiting module\n");
  pr_info("[sys_call_patcher] Reverting 0x%lx\n",
          sys_call_table_ref[SYSCALL_TO_OVERWRITE]);

  unprotect_memory();
  sys_call_table_ref[SYSCALL_TO_OVERWRITE] = original_call;
  protect_memory();

  pr_info("[sys_call_patcher] to 0x%lx\n", original_call);

  pr_info("[sys_call_patcher] Intercepted %d calls\n", num_used);
  pr_info("[sys_call_patcher] sys call table changes reverted\n");
}

module_init(hello_init);
module_exit(hello_exit);
