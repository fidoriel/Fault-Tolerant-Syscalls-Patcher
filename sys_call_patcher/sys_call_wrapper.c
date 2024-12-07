
#include <linux/delay.h>
#include <linux/init.h>
#include <linux/kallsyms.h>
#include <linux/mm.h>
#include <linux/mman.h>
#include <linux/module.h>
#include <linux/syscalls.h>
#include <asm/unistd_64.h>
#include <linux/kernel.h>

#include "cr0_patch.h"
#include "kln_patch.h"
#include "sys_call_wrapper.h"

unsigned long *sys_call_table_ref = NULL;
char *sym_name = "sys_call_table";

MODULE_LICENSE("GPL");
MODULE_AUTHOR("fidoriel");
MODULE_DESCRIPTION("A kernel module to overwrite a syscall in sys_call_table");

syscall_fn_t wrapped_calls[NUM_SYS_CALLS] = {NULL};

syscall_fn_t original_calls[NUM_SYS_CALLS] = {NULL};

int retry_intervals[] = {10, 100, 250};
#define NUM_RETRIES (sizeof(retry_intervals) / sizeof(retry_intervals[0]))

asmlinkage long syscall_wrapper(int sys_call_number, struct pt_regs *params) {
  long einval = original_calls[sys_call_number](params);
  int retry;

  if (einval < 0) {
    // pr_info("[sys_call_patcher] SysCall Failed. Starting retries.\n");

    for (retry = 0; retry < NUM_RETRIES; retry++) {
      msleep(retry_intervals[retry]);
      einval = original_calls[sys_call_number](params);

      if (einval < 0) {
        // pr_info("[sys_call_patcher] Retry %d failed.\n", retry + 1);
      } else {
        // pr_info("[sys_call_patcher] Retry %d succeeded.\n", retry + 1);
        break;
      }
    }
  }
  return einval;
}

static int __init hello_init(void) {
  pr_info("[sys_call_patcher] Initializing module\n");
  fill_wrapped_table(wrapped_calls);

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

  // pr_info("[sys_call_patcher] Valid sys_call_table address = 0x%lx\n",
          // sys_call_table_ref); // must match cat /proc/kallsyms | grep
                               // sys_call_table+

  unprotect_memory();
  for (size_t i = 0; i < NUM_SYS_CALLS; i++) {
    if (wrapped_calls[i] == NULL) {
      pr_info("[sys_call_patcher] Skipping %d\n", i);
      continue;
    }
    // pr_info("[sys_call_patcher] Wrapping %d\n", i);

    original_calls[i] = (syscall_fn_t)sys_call_table_ref[i];
    if (!original_calls[i]) {
      pr_err("[sys_call_patcher] Failed to get original open syscall\n");
      return -EINVAL;
    }

    // pr_info("[sys_call_patcher] Original Call address = 0x%lx\n",
    //         original_calls[i]); // must match cat /proc/kallsyms | grep
                                // __x64_sys_open
    // pr_info("[sys_call_patcher] Wrapper Call address = 0x%lx\n",
    //         wrapped_calls[i]);
    sys_call_table_ref[i] = (unsigned long)wrapped_calls[i];

    // pr_info("[sys_call_patcher] New call adress = 0x%lx\n",
            // sys_call_table_ref[i]);
  }
  protect_memory();

  return 0; // Success
}

static void __exit hello_exit(void) {
  pr_info("[sys_call_patcher] Exiting module\n");
  unprotect_memory();
  for (size_t i = 0; i < NUM_SYS_CALLS; i++) {
    // pr_info("[sys_call_patcher] Unwrapping %d\n", i);
    if (wrapped_calls[i] == NULL) {
      pr_info("[sys_call_patcher] wrapped_calls[%d] is NULL, skipping\n", i);
      continue;
    }
    // pr_info("[sys_call_patcher] Reverting 0x%lx\n", sys_call_table_ref[i]);

    sys_call_table_ref[i] = (unsigned long)original_calls[i];

    // pr_info("[sys_call_patcher] to 0x%lx\n", original_calls[i]);
  }
  protect_memory();
  // pr_info("[sys_call_patcher] Finished unwrapping all sys calls\n");
  pr_info("[sys_call_patcher] sys call table changes reverted\n");
}

module_init(hello_init);
module_exit(hello_exit);