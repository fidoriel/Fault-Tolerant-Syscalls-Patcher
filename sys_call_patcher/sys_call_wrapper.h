#ifndef SYS_CALL_WRAPPER_H
#define SYS_CALL_WRAPPER_H

#include <linux/types.h>
#include <linux/kernel.h>

typedef asmlinkage long (*syscall_fn_t)(struct pt_regs *params);

#define NUM_SYS_CALLS 547
// syscall: inclusive ranges: 0-335, 424-462, 512-547
extern syscall_fn_t *wrapped_calls; // store original syscall pointer, number of syscalls

#define NUM_RETRIES (sizeof(retry_intervals) / sizeof(retry_intervals[0]))

asmlinkage long syscall_wrapper(int sys_call_number, struct pt_regs *params);

void fill_wrapped_table(void);

#endif