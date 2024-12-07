
#include <linux/delay.h>
#include <linux/init.h>
#include <linux/kallsyms.h>
#include <linux/mm.h>
#include <linux/mman.h>
#include <linux/module.h>
#include <linux/syscalls.h>
#include <asm/unistd_64.h>
#include <linux/kernel.h>

#include "sys_call_wrapper.h"

asmlinkage long wrapper_0(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 0\n");
    return syscall_wrapper(0, params);
}

asmlinkage long wrapper_1(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 1\n");
    return syscall_wrapper(1, params);
}

asmlinkage long wrapper_2(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 2\n");
    return syscall_wrapper(2, params);
}

asmlinkage long wrapper_3(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 3\n");
    return syscall_wrapper(3, params);
}

asmlinkage long wrapper_4(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 4\n");
    return syscall_wrapper(4, params);
}

asmlinkage long wrapper_5(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 5\n");
    return syscall_wrapper(5, params);
}

asmlinkage long wrapper_6(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 6\n");
    return syscall_wrapper(6, params);
}

asmlinkage long wrapper_7(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 7\n");
    return syscall_wrapper(7, params);
}

asmlinkage long wrapper_8(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 8\n");
    return syscall_wrapper(8, params);
}

asmlinkage long wrapper_9(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 9\n");
    return syscall_wrapper(9, params);
}

asmlinkage long wrapper_10(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 10\n");
    return syscall_wrapper(10, params);
}

asmlinkage long wrapper_11(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 11\n");
    return syscall_wrapper(11, params);
}

asmlinkage long wrapper_12(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 12\n");
    return syscall_wrapper(12, params);
}

asmlinkage long wrapper_13(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 13\n");
    return syscall_wrapper(13, params);
}

asmlinkage long wrapper_14(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 14\n");
    return syscall_wrapper(14, params);
}

asmlinkage long wrapper_15(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 15\n");
    return syscall_wrapper(15, params);
}

asmlinkage long wrapper_16(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 16\n");
    return syscall_wrapper(16, params);
}

asmlinkage long wrapper_17(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 17\n");
    return syscall_wrapper(17, params);
}

asmlinkage long wrapper_18(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 18\n");
    return syscall_wrapper(18, params);
}

asmlinkage long wrapper_19(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 19\n");
    return syscall_wrapper(19, params);
}

asmlinkage long wrapper_20(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 20\n");
    return syscall_wrapper(20, params);
}

asmlinkage long wrapper_21(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 21\n");
    return syscall_wrapper(21, params);
}

asmlinkage long wrapper_22(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 22\n");
    return syscall_wrapper(22, params);
}

asmlinkage long wrapper_23(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 23\n");
    return syscall_wrapper(23, params);
}

void fill_wrapped_table(syscall_fn_t *wrapped_calls_ary)
{
    wrapped_calls_ary[0] = &wrapper_0;
    wrapped_calls_ary[1] = &wrapper_1;
    wrapped_calls_ary[2] = &wrapper_2;
    wrapped_calls_ary[3] = &wrapper_3;
    wrapped_calls_ary[4] = &wrapper_4;
    wrapped_calls_ary[5] = &wrapper_5;
    wrapped_calls_ary[6] = &wrapper_6;
    wrapped_calls_ary[7] = &wrapper_7;
    wrapped_calls_ary[8] = &wrapper_8;
    wrapped_calls_ary[9] = &wrapper_9;
    wrapped_calls_ary[10] = &wrapper_10;
    wrapped_calls_ary[11] = &wrapper_11;
    wrapped_calls_ary[12] = &wrapper_12;
    wrapped_calls_ary[13] = &wrapper_13;
    wrapped_calls_ary[14] = &wrapper_14;
    wrapped_calls_ary[15] = &wrapper_15;
    wrapped_calls_ary[16] = &wrapper_16;
    wrapped_calls_ary[17] = &wrapper_17;
    wrapped_calls_ary[18] = &wrapper_18;
    wrapped_calls_ary[19] = &wrapper_19;
    wrapped_calls_ary[20] = &wrapper_20;
    wrapped_calls_ary[21] = &wrapper_21;
    wrapped_calls_ary[22] = &wrapper_22;
    wrapped_calls_ary[23] = &wrapper_23;
}