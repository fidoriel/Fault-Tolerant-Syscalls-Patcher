#ifndef SYS_CALL_WRAPPER_H
#define SYS_CALL_WRAPPER_H

#include <linux/types.h>
#include <linux/kernel.h>

typedef asmlinkage long (*syscall_fn_t)(struct pt_regs *params);

#define NUM_SYS_CALLS 24 // 545

asmlinkage long syscall_wrapper(int sys_call_number, struct pt_regs *params);

void fill_wrapped_table(syscall_fn_t wrapped_calls_ary[]);

#endif