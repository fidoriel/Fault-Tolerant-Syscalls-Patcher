
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
    int number = 0;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_1(struct pt_regs *params)
{
    int number = 1;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_2(struct pt_regs *params)
{
    int number = 2;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_3(struct pt_regs *params)
{
    int number = 3;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_4(struct pt_regs *params)
{
    int number = 4;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_5(struct pt_regs *params)
{
    int number = 5;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_6(struct pt_regs *params)
{
    int number = 6;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_7(struct pt_regs *params)
{
    int number = 7;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_8(struct pt_regs *params)
{
    int number = 8;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_9(struct pt_regs *params)
{
    int number = 9;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_10(struct pt_regs *params)
{
    int number = 10;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_11(struct pt_regs *params)
{
    int number = 11;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_12(struct pt_regs *params)
{
    int number = 12;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_13(struct pt_regs *params)
{
    int number = 13;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_14(struct pt_regs *params)
{
    int number = 14;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_15(struct pt_regs *params)
{
    int number = 15;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_16(struct pt_regs *params)
{
    int number = 16;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_17(struct pt_regs *params)
{
    int number = 17;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_18(struct pt_regs *params)
{
    int number = 18;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_19(struct pt_regs *params)
{
    int number = 19;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_20(struct pt_regs *params)
{
    int number = 20;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_21(struct pt_regs *params)
{
    int number = 21;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_22(struct pt_regs *params)
{
    int number = 22;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_23(struct pt_regs *params)
{
    int number = 23;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_24(struct pt_regs *params)
{
    int number = 24;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_25(struct pt_regs *params)
{
    int number = 25;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_26(struct pt_regs *params)
{
    int number = 26;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_27(struct pt_regs *params)
{
    int number = 27;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_28(struct pt_regs *params)
{
    int number = 28;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_29(struct pt_regs *params)
{
    int number = 29;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_30(struct pt_regs *params)
{
    int number = 30;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_31(struct pt_regs *params)
{
    int number = 31;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_32(struct pt_regs *params)
{
    int number = 32;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_33(struct pt_regs *params)
{
    int number = 33;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_34(struct pt_regs *params)
{
    int number = 34;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_35(struct pt_regs *params)
{
    int number = 35;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_36(struct pt_regs *params)
{
    int number = 36;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_37(struct pt_regs *params)
{
    int number = 37;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_38(struct pt_regs *params)
{
    int number = 38;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_39(struct pt_regs *params)
{
    int number = 39;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_40(struct pt_regs *params)
{
    int number = 40;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_41(struct pt_regs *params)
{
    int number = 41;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_42(struct pt_regs *params)
{
    int number = 42;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_43(struct pt_regs *params)
{
    int number = 43;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_44(struct pt_regs *params)
{
    int number = 44;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_45(struct pt_regs *params)
{
    int number = 45;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_46(struct pt_regs *params)
{
    int number = 46;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_47(struct pt_regs *params)
{
    int number = 47;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_48(struct pt_regs *params)
{
    int number = 48;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_49(struct pt_regs *params)
{
    int number = 49;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_50(struct pt_regs *params)
{
    int number = 50;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_51(struct pt_regs *params)
{
    int number = 51;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_52(struct pt_regs *params)
{
    int number = 52;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_53(struct pt_regs *params)
{
    int number = 53;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_54(struct pt_regs *params)
{
    int number = 54;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_55(struct pt_regs *params)
{
    int number = 55;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_56(struct pt_regs *params)
{
    int number = 56;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_57(struct pt_regs *params)
{
    int number = 57;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_58(struct pt_regs *params)
{
    int number = 58;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_59(struct pt_regs *params)
{
    int number = 59;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_60(struct pt_regs *params)
{
    int number = 60;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_61(struct pt_regs *params)
{
    int number = 61;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_62(struct pt_regs *params)
{
    int number = 62;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_63(struct pt_regs *params)
{
    int number = 63;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_64(struct pt_regs *params)
{
    int number = 64;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_65(struct pt_regs *params)
{
    int number = 65;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_66(struct pt_regs *params)
{
    int number = 66;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_67(struct pt_regs *params)
{
    int number = 67;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_68(struct pt_regs *params)
{
    int number = 68;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_69(struct pt_regs *params)
{
    int number = 69;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_70(struct pt_regs *params)
{
    int number = 70;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_71(struct pt_regs *params)
{
    int number = 71;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_72(struct pt_regs *params)
{
    int number = 72;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_73(struct pt_regs *params)
{
    int number = 73;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_74(struct pt_regs *params)
{
    int number = 74;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_75(struct pt_regs *params)
{
    int number = 75;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_76(struct pt_regs *params)
{
    int number = 76;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_77(struct pt_regs *params)
{
    int number = 77;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_78(struct pt_regs *params)
{
    int number = 78;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_79(struct pt_regs *params)
{
    int number = 79;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_80(struct pt_regs *params)
{
    int number = 80;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_81(struct pt_regs *params)
{
    int number = 81;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_82(struct pt_regs *params)
{
    int number = 82;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_83(struct pt_regs *params)
{
    int number = 83;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_84(struct pt_regs *params)
{
    int number = 84;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_85(struct pt_regs *params)
{
    int number = 85;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_86(struct pt_regs *params)
{
    int number = 86;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_87(struct pt_regs *params)
{
    int number = 87;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_88(struct pt_regs *params)
{
    int number = 88;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_89(struct pt_regs *params)
{
    int number = 89;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_90(struct pt_regs *params)
{
    int number = 90;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_91(struct pt_regs *params)
{
    int number = 91;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_92(struct pt_regs *params)
{
    int number = 92;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_93(struct pt_regs *params)
{
    int number = 93;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_94(struct pt_regs *params)
{
    int number = 94;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_95(struct pt_regs *params)
{
    int number = 95;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_96(struct pt_regs *params)
{
    int number = 96;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_97(struct pt_regs *params)
{
    int number = 97;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_98(struct pt_regs *params)
{
    int number = 98;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_99(struct pt_regs *params)
{
    int number = 99;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_100(struct pt_regs *params)
{
    int number = 100;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_101(struct pt_regs *params)
{
    int number = 101;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_102(struct pt_regs *params)
{
    int number = 102;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_103(struct pt_regs *params)
{
    int number = 103;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_104(struct pt_regs *params)
{
    int number = 104;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_105(struct pt_regs *params)
{
    int number = 105;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_106(struct pt_regs *params)
{
    int number = 106;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_107(struct pt_regs *params)
{
    int number = 107;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_108(struct pt_regs *params)
{
    int number = 108;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_109(struct pt_regs *params)
{
    int number = 109;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_110(struct pt_regs *params)
{
    int number = 110;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_111(struct pt_regs *params)
{
    int number = 111;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_112(struct pt_regs *params)
{
    int number = 112;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_113(struct pt_regs *params)
{
    int number = 113;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_114(struct pt_regs *params)
{
    int number = 114;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_115(struct pt_regs *params)
{
    int number = 115;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_116(struct pt_regs *params)
{
    int number = 116;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_117(struct pt_regs *params)
{
    int number = 117;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_118(struct pt_regs *params)
{
    int number = 118;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_119(struct pt_regs *params)
{
    int number = 119;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_120(struct pt_regs *params)
{
    int number = 120;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_121(struct pt_regs *params)
{
    int number = 121;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_122(struct pt_regs *params)
{
    int number = 122;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_123(struct pt_regs *params)
{
    int number = 123;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_124(struct pt_regs *params)
{
    int number = 124;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_125(struct pt_regs *params)
{
    int number = 125;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_126(struct pt_regs *params)
{
    int number = 126;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_127(struct pt_regs *params)
{
    int number = 127;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_128(struct pt_regs *params)
{
    int number = 128;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_129(struct pt_regs *params)
{
    int number = 129;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_130(struct pt_regs *params)
{
    int number = 130;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_131(struct pt_regs *params)
{
    int number = 131;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_132(struct pt_regs *params)
{
    int number = 132;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_133(struct pt_regs *params)
{
    int number = 133;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_134(struct pt_regs *params)
{
    int number = 134;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_135(struct pt_regs *params)
{
    int number = 135;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_136(struct pt_regs *params)
{
    int number = 136;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_137(struct pt_regs *params)
{
    int number = 137;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_138(struct pt_regs *params)
{
    int number = 138;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_139(struct pt_regs *params)
{
    int number = 139;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_140(struct pt_regs *params)
{
    int number = 140;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_141(struct pt_regs *params)
{
    int number = 141;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_142(struct pt_regs *params)
{
    int number = 142;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_143(struct pt_regs *params)
{
    int number = 143;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_144(struct pt_regs *params)
{
    int number = 144;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_145(struct pt_regs *params)
{
    int number = 145;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_146(struct pt_regs *params)
{
    int number = 146;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_147(struct pt_regs *params)
{
    int number = 147;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_148(struct pt_regs *params)
{
    int number = 148;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_149(struct pt_regs *params)
{
    int number = 149;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_150(struct pt_regs *params)
{
    int number = 150;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_151(struct pt_regs *params)
{
    int number = 151;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_152(struct pt_regs *params)
{
    int number = 152;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_153(struct pt_regs *params)
{
    int number = 153;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_154(struct pt_regs *params)
{
    int number = 154;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_155(struct pt_regs *params)
{
    int number = 155;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_156(struct pt_regs *params)
{
    int number = 156;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_157(struct pt_regs *params)
{
    int number = 157;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_158(struct pt_regs *params)
{
    int number = 158;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_159(struct pt_regs *params)
{
    int number = 159;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_160(struct pt_regs *params)
{
    int number = 160;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_161(struct pt_regs *params)
{
    int number = 161;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_162(struct pt_regs *params)
{
    int number = 162;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_163(struct pt_regs *params)
{
    int number = 163;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_164(struct pt_regs *params)
{
    int number = 164;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_165(struct pt_regs *params)
{
    int number = 165;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_166(struct pt_regs *params)
{
    int number = 166;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_167(struct pt_regs *params)
{
    int number = 167;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_168(struct pt_regs *params)
{
    int number = 168;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_169(struct pt_regs *params)
{
    int number = 169;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_170(struct pt_regs *params)
{
    int number = 170;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_171(struct pt_regs *params)
{
    int number = 171;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_172(struct pt_regs *params)
{
    int number = 172;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_173(struct pt_regs *params)
{
    int number = 173;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_174(struct pt_regs *params)
{
    int number = 174;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_175(struct pt_regs *params)
{
    int number = 175;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_176(struct pt_regs *params)
{
    int number = 176;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_177(struct pt_regs *params)
{
    int number = 177;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_178(struct pt_regs *params)
{
    int number = 178;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_179(struct pt_regs *params)
{
    int number = 179;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_180(struct pt_regs *params)
{
    int number = 180;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_181(struct pt_regs *params)
{
    int number = 181;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_182(struct pt_regs *params)
{
    int number = 182;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_183(struct pt_regs *params)
{
    int number = 183;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_184(struct pt_regs *params)
{
    int number = 184;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_185(struct pt_regs *params)
{
    int number = 185;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_186(struct pt_regs *params)
{
    int number = 186;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_187(struct pt_regs *params)
{
    int number = 187;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_188(struct pt_regs *params)
{
    int number = 188;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_189(struct pt_regs *params)
{
    int number = 189;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_190(struct pt_regs *params)
{
    int number = 190;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_191(struct pt_regs *params)
{
    int number = 191;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_192(struct pt_regs *params)
{
    int number = 192;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_193(struct pt_regs *params)
{
    int number = 193;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_194(struct pt_regs *params)
{
    int number = 194;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_195(struct pt_regs *params)
{
    int number = 195;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_196(struct pt_regs *params)
{
    int number = 196;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_197(struct pt_regs *params)
{
    int number = 197;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_198(struct pt_regs *params)
{
    int number = 198;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_199(struct pt_regs *params)
{
    int number = 199;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_200(struct pt_regs *params)
{
    int number = 200;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_201(struct pt_regs *params)
{
    int number = 201;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_202(struct pt_regs *params)
{
    int number = 202;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_203(struct pt_regs *params)
{
    int number = 203;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_204(struct pt_regs *params)
{
    int number = 204;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_205(struct pt_regs *params)
{
    int number = 205;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_206(struct pt_regs *params)
{
    int number = 206;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_207(struct pt_regs *params)
{
    int number = 207;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_208(struct pt_regs *params)
{
    int number = 208;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_209(struct pt_regs *params)
{
    int number = 209;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_210(struct pt_regs *params)
{
    int number = 210;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_211(struct pt_regs *params)
{
    int number = 211;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_212(struct pt_regs *params)
{
    int number = 212;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_213(struct pt_regs *params)
{
    int number = 213;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_214(struct pt_regs *params)
{
    int number = 214;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_215(struct pt_regs *params)
{
    int number = 215;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_216(struct pt_regs *params)
{
    int number = 216;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_217(struct pt_regs *params)
{
    int number = 217;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_218(struct pt_regs *params)
{
    int number = 218;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_219(struct pt_regs *params)
{
    int number = 219;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_220(struct pt_regs *params)
{
    int number = 220;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_221(struct pt_regs *params)
{
    int number = 221;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_222(struct pt_regs *params)
{
    int number = 222;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_223(struct pt_regs *params)
{
    int number = 223;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_224(struct pt_regs *params)
{
    int number = 224;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_225(struct pt_regs *params)
{
    int number = 225;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_226(struct pt_regs *params)
{
    int number = 226;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_227(struct pt_regs *params)
{
    int number = 227;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_228(struct pt_regs *params)
{
    int number = 228;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_229(struct pt_regs *params)
{
    int number = 229;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_230(struct pt_regs *params)
{
    int number = 230;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_231(struct pt_regs *params)
{
    int number = 231;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_232(struct pt_regs *params)
{
    int number = 232;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_233(struct pt_regs *params)
{
    int number = 233;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_234(struct pt_regs *params)
{
    int number = 234;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_235(struct pt_regs *params)
{
    int number = 235;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_236(struct pt_regs *params)
{
    int number = 236;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_237(struct pt_regs *params)
{
    int number = 237;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_238(struct pt_regs *params)
{
    int number = 238;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_239(struct pt_regs *params)
{
    int number = 239;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_240(struct pt_regs *params)
{
    int number = 240;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_241(struct pt_regs *params)
{
    int number = 241;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_242(struct pt_regs *params)
{
    int number = 242;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_243(struct pt_regs *params)
{
    int number = 243;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_244(struct pt_regs *params)
{
    int number = 244;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_245(struct pt_regs *params)
{
    int number = 245;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_246(struct pt_regs *params)
{
    int number = 246;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_247(struct pt_regs *params)
{
    int number = 247;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_248(struct pt_regs *params)
{
    int number = 248;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_249(struct pt_regs *params)
{
    int number = 249;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_250(struct pt_regs *params)
{
    int number = 250;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_251(struct pt_regs *params)
{
    int number = 251;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_252(struct pt_regs *params)
{
    int number = 252;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_253(struct pt_regs *params)
{
    int number = 253;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_254(struct pt_regs *params)
{
    int number = 254;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_255(struct pt_regs *params)
{
    int number = 255;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_256(struct pt_regs *params)
{
    int number = 256;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_257(struct pt_regs *params)
{
    int number = 257;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_258(struct pt_regs *params)
{
    int number = 258;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_259(struct pt_regs *params)
{
    int number = 259;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_260(struct pt_regs *params)
{
    int number = 260;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_261(struct pt_regs *params)
{
    int number = 261;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_262(struct pt_regs *params)
{
    int number = 262;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_263(struct pt_regs *params)
{
    int number = 263;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_264(struct pt_regs *params)
{
    int number = 264;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_265(struct pt_regs *params)
{
    int number = 265;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_266(struct pt_regs *params)
{
    int number = 266;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_267(struct pt_regs *params)
{
    int number = 267;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_268(struct pt_regs *params)
{
    int number = 268;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_269(struct pt_regs *params)
{
    int number = 269;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_270(struct pt_regs *params)
{
    int number = 270;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_271(struct pt_regs *params)
{
    int number = 271;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_272(struct pt_regs *params)
{
    int number = 272;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_273(struct pt_regs *params)
{
    int number = 273;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_274(struct pt_regs *params)
{
    int number = 274;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_275(struct pt_regs *params)
{
    int number = 275;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_276(struct pt_regs *params)
{
    int number = 276;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_277(struct pt_regs *params)
{
    int number = 277;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_278(struct pt_regs *params)
{
    int number = 278;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_279(struct pt_regs *params)
{
    int number = 279;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_280(struct pt_regs *params)
{
    int number = 280;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_281(struct pt_regs *params)
{
    int number = 281;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_282(struct pt_regs *params)
{
    int number = 282;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_283(struct pt_regs *params)
{
    int number = 283;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_284(struct pt_regs *params)
{
    int number = 284;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_285(struct pt_regs *params)
{
    int number = 285;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_286(struct pt_regs *params)
{
    int number = 286;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_287(struct pt_regs *params)
{
    int number = 287;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_288(struct pt_regs *params)
{
    int number = 288;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_289(struct pt_regs *params)
{
    int number = 289;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_290(struct pt_regs *params)
{
    int number = 290;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_291(struct pt_regs *params)
{
    int number = 291;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_292(struct pt_regs *params)
{
    int number = 292;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_293(struct pt_regs *params)
{
    int number = 293;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_294(struct pt_regs *params)
{
    int number = 294;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_295(struct pt_regs *params)
{
    int number = 295;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_296(struct pt_regs *params)
{
    int number = 296;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_297(struct pt_regs *params)
{
    int number = 297;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_298(struct pt_regs *params)
{
    int number = 298;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_299(struct pt_regs *params)
{
    int number = 299;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_300(struct pt_regs *params)
{
    int number = 300;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_301(struct pt_regs *params)
{
    int number = 301;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_302(struct pt_regs *params)
{
    int number = 302;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_303(struct pt_regs *params)
{
    int number = 303;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_304(struct pt_regs *params)
{
    int number = 304;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_305(struct pt_regs *params)
{
    int number = 305;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_306(struct pt_regs *params)
{
    int number = 306;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_307(struct pt_regs *params)
{
    int number = 307;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_308(struct pt_regs *params)
{
    int number = 308;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_309(struct pt_regs *params)
{
    int number = 309;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_310(struct pt_regs *params)
{
    int number = 310;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_311(struct pt_regs *params)
{
    int number = 311;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_312(struct pt_regs *params)
{
    int number = 312;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_313(struct pt_regs *params)
{
    int number = 313;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_314(struct pt_regs *params)
{
    int number = 314;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_315(struct pt_regs *params)
{
    int number = 315;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_316(struct pt_regs *params)
{
    int number = 316;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_317(struct pt_regs *params)
{
    int number = 317;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_318(struct pt_regs *params)
{
    int number = 318;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_319(struct pt_regs *params)
{
    int number = 319;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_320(struct pt_regs *params)
{
    int number = 320;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_321(struct pt_regs *params)
{
    int number = 321;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_322(struct pt_regs *params)
{
    int number = 322;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_323(struct pt_regs *params)
{
    int number = 323;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_324(struct pt_regs *params)
{
    int number = 324;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_325(struct pt_regs *params)
{
    int number = 325;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_326(struct pt_regs *params)
{
    int number = 326;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_327(struct pt_regs *params)
{
    int number = 327;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_328(struct pt_regs *params)
{
    int number = 328;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_329(struct pt_regs *params)
{
    int number = 329;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_330(struct pt_regs *params)
{
    int number = 330;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_331(struct pt_regs *params)
{
    int number = 331;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_332(struct pt_regs *params)
{
    int number = 332;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_333(struct pt_regs *params)
{
    int number = 333;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_334(struct pt_regs *params)
{
    int number = 334;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_335(struct pt_regs *params)
{
    int number = 335;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_336(struct pt_regs *params)
{
    int number = 336;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_337(struct pt_regs *params)
{
    int number = 337;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_338(struct pt_regs *params)
{
    int number = 338;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_339(struct pt_regs *params)
{
    int number = 339;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_340(struct pt_regs *params)
{
    int number = 340;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_341(struct pt_regs *params)
{
    int number = 341;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_342(struct pt_regs *params)
{
    int number = 342;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_343(struct pt_regs *params)
{
    int number = 343;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_344(struct pt_regs *params)
{
    int number = 344;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_345(struct pt_regs *params)
{
    int number = 345;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_346(struct pt_regs *params)
{
    int number = 346;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_347(struct pt_regs *params)
{
    int number = 347;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_348(struct pt_regs *params)
{
    int number = 348;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_349(struct pt_regs *params)
{
    int number = 349;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_350(struct pt_regs *params)
{
    int number = 350;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_351(struct pt_regs *params)
{
    int number = 351;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_352(struct pt_regs *params)
{
    int number = 352;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_353(struct pt_regs *params)
{
    int number = 353;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_354(struct pt_regs *params)
{
    int number = 354;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_355(struct pt_regs *params)
{
    int number = 355;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_356(struct pt_regs *params)
{
    int number = 356;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_357(struct pt_regs *params)
{
    int number = 357;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_358(struct pt_regs *params)
{
    int number = 358;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_359(struct pt_regs *params)
{
    int number = 359;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_360(struct pt_regs *params)
{
    int number = 360;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_361(struct pt_regs *params)
{
    int number = 361;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_362(struct pt_regs *params)
{
    int number = 362;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_363(struct pt_regs *params)
{
    int number = 363;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_364(struct pt_regs *params)
{
    int number = 364;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_365(struct pt_regs *params)
{
    int number = 365;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_366(struct pt_regs *params)
{
    int number = 366;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_367(struct pt_regs *params)
{
    int number = 367;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_368(struct pt_regs *params)
{
    int number = 368;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_369(struct pt_regs *params)
{
    int number = 369;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_370(struct pt_regs *params)
{
    int number = 370;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_371(struct pt_regs *params)
{
    int number = 371;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_372(struct pt_regs *params)
{
    int number = 372;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_373(struct pt_regs *params)
{
    int number = 373;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_374(struct pt_regs *params)
{
    int number = 374;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_375(struct pt_regs *params)
{
    int number = 375;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_376(struct pt_regs *params)
{
    int number = 376;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_377(struct pt_regs *params)
{
    int number = 377;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_378(struct pt_regs *params)
{
    int number = 378;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_379(struct pt_regs *params)
{
    int number = 379;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_380(struct pt_regs *params)
{
    int number = 380;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_381(struct pt_regs *params)
{
    int number = 381;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_382(struct pt_regs *params)
{
    int number = 382;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_383(struct pt_regs *params)
{
    int number = 383;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_384(struct pt_regs *params)
{
    int number = 384;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_385(struct pt_regs *params)
{
    int number = 385;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_386(struct pt_regs *params)
{
    int number = 386;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_387(struct pt_regs *params)
{
    int number = 387;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_388(struct pt_regs *params)
{
    int number = 388;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_389(struct pt_regs *params)
{
    int number = 389;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_390(struct pt_regs *params)
{
    int number = 390;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_391(struct pt_regs *params)
{
    int number = 391;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_392(struct pt_regs *params)
{
    int number = 392;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_393(struct pt_regs *params)
{
    int number = 393;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_394(struct pt_regs *params)
{
    int number = 394;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_395(struct pt_regs *params)
{
    int number = 395;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_396(struct pt_regs *params)
{
    int number = 396;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_397(struct pt_regs *params)
{
    int number = 397;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_398(struct pt_regs *params)
{
    int number = 398;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_399(struct pt_regs *params)
{
    int number = 399;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_400(struct pt_regs *params)
{
    int number = 400;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_401(struct pt_regs *params)
{
    int number = 401;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_402(struct pt_regs *params)
{
    int number = 402;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_403(struct pt_regs *params)
{
    int number = 403;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_404(struct pt_regs *params)
{
    int number = 404;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_405(struct pt_regs *params)
{
    int number = 405;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_406(struct pt_regs *params)
{
    int number = 406;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_407(struct pt_regs *params)
{
    int number = 407;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_408(struct pt_regs *params)
{
    int number = 408;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_409(struct pt_regs *params)
{
    int number = 409;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_410(struct pt_regs *params)
{
    int number = 410;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_411(struct pt_regs *params)
{
    int number = 411;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_412(struct pt_regs *params)
{
    int number = 412;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_413(struct pt_regs *params)
{
    int number = 413;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_414(struct pt_regs *params)
{
    int number = 414;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_415(struct pt_regs *params)
{
    int number = 415;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_416(struct pt_regs *params)
{
    int number = 416;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_417(struct pt_regs *params)
{
    int number = 417;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_418(struct pt_regs *params)
{
    int number = 418;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_419(struct pt_regs *params)
{
    int number = 419;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_420(struct pt_regs *params)
{
    int number = 420;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_421(struct pt_regs *params)
{
    int number = 421;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_422(struct pt_regs *params)
{
    int number = 422;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_423(struct pt_regs *params)
{
    int number = 423;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_424(struct pt_regs *params)
{
    int number = 424;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_425(struct pt_regs *params)
{
    int number = 425;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_426(struct pt_regs *params)
{
    int number = 426;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_427(struct pt_regs *params)
{
    int number = 427;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_428(struct pt_regs *params)
{
    int number = 428;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_429(struct pt_regs *params)
{
    int number = 429;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_430(struct pt_regs *params)
{
    int number = 430;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_431(struct pt_regs *params)
{
    int number = 431;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_432(struct pt_regs *params)
{
    int number = 432;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_433(struct pt_regs *params)
{
    int number = 433;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_434(struct pt_regs *params)
{
    int number = 434;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_435(struct pt_regs *params)
{
    int number = 435;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_436(struct pt_regs *params)
{
    int number = 436;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_437(struct pt_regs *params)
{
    int number = 437;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_438(struct pt_regs *params)
{
    int number = 438;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_439(struct pt_regs *params)
{
    int number = 439;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_440(struct pt_regs *params)
{
    int number = 440;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_441(struct pt_regs *params)
{
    int number = 441;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_442(struct pt_regs *params)
{
    int number = 442;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_443(struct pt_regs *params)
{
    int number = 443;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_444(struct pt_regs *params)
{
    int number = 444;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_445(struct pt_regs *params)
{
    int number = 445;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_446(struct pt_regs *params)
{
    int number = 446;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_447(struct pt_regs *params)
{
    int number = 447;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_448(struct pt_regs *params)
{
    int number = 448;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_449(struct pt_regs *params)
{
    int number = 449;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_450(struct pt_regs *params)
{
    int number = 450;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_451(struct pt_regs *params)
{
    int number = 451;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_452(struct pt_regs *params)
{
    int number = 452;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_453(struct pt_regs *params)
{
    int number = 453;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_454(struct pt_regs *params)
{
    int number = 454;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_455(struct pt_regs *params)
{
    int number = 455;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_456(struct pt_regs *params)
{
    int number = 456;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_457(struct pt_regs *params)
{
    int number = 457;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_458(struct pt_regs *params)
{
    int number = 458;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_459(struct pt_regs *params)
{
    int number = 459;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_460(struct pt_regs *params)
{
    int number = 460;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_461(struct pt_regs *params)
{
    int number = 461;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_462(struct pt_regs *params)
{
    int number = 462;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_463(struct pt_regs *params)
{
    int number = 463;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_464(struct pt_regs *params)
{
    int number = 464;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_465(struct pt_regs *params)
{
    int number = 465;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_466(struct pt_regs *params)
{
    int number = 466;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_467(struct pt_regs *params)
{
    int number = 467;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_468(struct pt_regs *params)
{
    int number = 468;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_469(struct pt_regs *params)
{
    int number = 469;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_470(struct pt_regs *params)
{
    int number = 470;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_471(struct pt_regs *params)
{
    int number = 471;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_472(struct pt_regs *params)
{
    int number = 472;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_473(struct pt_regs *params)
{
    int number = 473;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_474(struct pt_regs *params)
{
    int number = 474;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_475(struct pt_regs *params)
{
    int number = 475;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_476(struct pt_regs *params)
{
    int number = 476;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_477(struct pt_regs *params)
{
    int number = 477;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_478(struct pt_regs *params)
{
    int number = 478;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_479(struct pt_regs *params)
{
    int number = 479;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_480(struct pt_regs *params)
{
    int number = 480;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_481(struct pt_regs *params)
{
    int number = 481;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_482(struct pt_regs *params)
{
    int number = 482;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_483(struct pt_regs *params)
{
    int number = 483;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_484(struct pt_regs *params)
{
    int number = 484;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_485(struct pt_regs *params)
{
    int number = 485;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_486(struct pt_regs *params)
{
    int number = 486;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_487(struct pt_regs *params)
{
    int number = 487;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_488(struct pt_regs *params)
{
    int number = 488;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_489(struct pt_regs *params)
{
    int number = 489;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_490(struct pt_regs *params)
{
    int number = 490;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_491(struct pt_regs *params)
{
    int number = 491;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_492(struct pt_regs *params)
{
    int number = 492;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_493(struct pt_regs *params)
{
    int number = 493;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_494(struct pt_regs *params)
{
    int number = 494;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_495(struct pt_regs *params)
{
    int number = 495;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_496(struct pt_regs *params)
{
    int number = 496;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_497(struct pt_regs *params)
{
    int number = 497;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_498(struct pt_regs *params)
{
    int number = 498;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_499(struct pt_regs *params)
{
    int number = 499;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_500(struct pt_regs *params)
{
    int number = 500;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_501(struct pt_regs *params)
{
    int number = 501;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_502(struct pt_regs *params)
{
    int number = 502;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_503(struct pt_regs *params)
{
    int number = 503;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_504(struct pt_regs *params)
{
    int number = 504;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_505(struct pt_regs *params)
{
    int number = 505;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_506(struct pt_regs *params)
{
    int number = 506;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_507(struct pt_regs *params)
{
    int number = 507;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_508(struct pt_regs *params)
{
    int number = 508;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_509(struct pt_regs *params)
{
    int number = 509;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_510(struct pt_regs *params)
{
    int number = 510;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_511(struct pt_regs *params)
{
    int number = 511;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_512(struct pt_regs *params)
{
    int number = 512;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_513(struct pt_regs *params)
{
    int number = 513;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_514(struct pt_regs *params)
{
    int number = 514;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_515(struct pt_regs *params)
{
    int number = 515;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_516(struct pt_regs *params)
{
    int number = 516;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_517(struct pt_regs *params)
{
    int number = 517;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_518(struct pt_regs *params)
{
    int number = 518;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_519(struct pt_regs *params)
{
    int number = 519;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_520(struct pt_regs *params)
{
    int number = 520;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_521(struct pt_regs *params)
{
    int number = 521;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_522(struct pt_regs *params)
{
    int number = 522;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_523(struct pt_regs *params)
{
    int number = 523;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_524(struct pt_regs *params)
{
    int number = 524;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_525(struct pt_regs *params)
{
    int number = 525;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_526(struct pt_regs *params)
{
    int number = 526;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_527(struct pt_regs *params)
{
    int number = 527;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_528(struct pt_regs *params)
{
    int number = 528;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_529(struct pt_regs *params)
{
    int number = 529;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_530(struct pt_regs *params)
{
    int number = 530;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_531(struct pt_regs *params)
{
    int number = 531;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_532(struct pt_regs *params)
{
    int number = 532;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_533(struct pt_regs *params)
{
    int number = 533;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_534(struct pt_regs *params)
{
    int number = 534;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_535(struct pt_regs *params)
{
    int number = 535;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_536(struct pt_regs *params)
{
    int number = 536;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_537(struct pt_regs *params)
{
    int number = 537;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_538(struct pt_regs *params)
{
    int number = 538;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_539(struct pt_regs *params)
{
    int number = 539;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_540(struct pt_regs *params)
{
    int number = 540;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_541(struct pt_regs *params)
{
    int number = 541;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_542(struct pt_regs *params)
{
    int number = 542;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_543(struct pt_regs *params)
{
    int number = 543;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_544(struct pt_regs *params)
{
    int number = 544;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_545(struct pt_regs *params)
{
    int number = 545;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

asmlinkage long wrapper_546(struct pt_regs *params)
{
    int number = 546;
    // pr_info("[sys_call_patcher] Calling %d.\n", number);
    return syscall_wrapper(number, params);
}

void fill_wrapped_table()
{
    wrapped_calls[0] = &wrapper_0;
    wrapped_calls[1] = &wrapper_1;
    wrapped_calls[2] = &wrapper_2;
    wrapped_calls[3] = &wrapper_3;
    wrapped_calls[4] = &wrapper_4;
    wrapped_calls[5] = &wrapper_5;
    wrapped_calls[6] = &wrapper_6;
    wrapped_calls[7] = &wrapper_7;
    wrapped_calls[8] = &wrapper_8;
    wrapped_calls[9] = &wrapper_9;
    wrapped_calls[10] = &wrapper_10;
    wrapped_calls[11] = &wrapper_11;
    wrapped_calls[12] = &wrapper_12;
    wrapped_calls[13] = &wrapper_13;
    wrapped_calls[14] = &wrapper_14;
    wrapped_calls[15] = &wrapper_15;
    wrapped_calls[16] = &wrapper_16;
    wrapped_calls[17] = &wrapper_17;
    wrapped_calls[18] = &wrapper_18;
    wrapped_calls[19] = &wrapper_19;
    wrapped_calls[20] = &wrapper_20;
    wrapped_calls[21] = &wrapper_21;
    wrapped_calls[22] = &wrapper_22;
    wrapped_calls[23] = &wrapper_23;
    wrapped_calls[24] = &wrapper_24;
    wrapped_calls[25] = &wrapper_25;
    wrapped_calls[26] = &wrapper_26;
    wrapped_calls[27] = &wrapper_27;
    wrapped_calls[28] = &wrapper_28;
    wrapped_calls[29] = &wrapper_29;
    wrapped_calls[30] = &wrapper_30;
    wrapped_calls[31] = &wrapper_31;
    wrapped_calls[32] = &wrapper_32;
    wrapped_calls[33] = &wrapper_33;
    wrapped_calls[34] = &wrapper_34;
    wrapped_calls[35] = &wrapper_35;
    wrapped_calls[36] = &wrapper_36;
    wrapped_calls[37] = &wrapper_37;
    wrapped_calls[38] = &wrapper_38;
    wrapped_calls[39] = &wrapper_39;
    wrapped_calls[40] = &wrapper_40;
    wrapped_calls[41] = &wrapper_41;
    wrapped_calls[42] = &wrapper_42;
    wrapped_calls[43] = &wrapper_43;
    wrapped_calls[44] = &wrapper_44;
    wrapped_calls[45] = &wrapper_45;
    wrapped_calls[46] = &wrapper_46;
    wrapped_calls[47] = &wrapper_47;
    wrapped_calls[48] = &wrapper_48;
    wrapped_calls[49] = &wrapper_49;
    wrapped_calls[50] = &wrapper_50;
    wrapped_calls[51] = &wrapper_51;
    wrapped_calls[52] = &wrapper_52;
    wrapped_calls[53] = &wrapper_53;
    wrapped_calls[54] = &wrapper_54;
    wrapped_calls[55] = &wrapper_55;
    wrapped_calls[56] = &wrapper_56;
    wrapped_calls[57] = &wrapper_57;
    wrapped_calls[58] = &wrapper_58;
    wrapped_calls[59] = &wrapper_59;
    wrapped_calls[60] = &wrapper_60;
    wrapped_calls[61] = &wrapper_61;
    wrapped_calls[62] = &wrapper_62;
    wrapped_calls[63] = &wrapper_63;
    wrapped_calls[64] = &wrapper_64;
    wrapped_calls[65] = &wrapper_65;
    wrapped_calls[66] = &wrapper_66;
    wrapped_calls[67] = &wrapper_67;
    wrapped_calls[68] = &wrapper_68;
    wrapped_calls[69] = &wrapper_69;
    wrapped_calls[70] = &wrapper_70;
    wrapped_calls[71] = &wrapper_71;
    wrapped_calls[72] = &wrapper_72;
    wrapped_calls[73] = &wrapper_73;
    wrapped_calls[74] = &wrapper_74;
    wrapped_calls[75] = &wrapper_75;
    wrapped_calls[76] = &wrapper_76;
    wrapped_calls[77] = &wrapper_77;
    wrapped_calls[78] = &wrapper_78;
    wrapped_calls[79] = &wrapper_79;
    wrapped_calls[80] = &wrapper_80;
    wrapped_calls[81] = &wrapper_81;
    wrapped_calls[82] = &wrapper_82;
    wrapped_calls[83] = &wrapper_83;
    wrapped_calls[84] = &wrapper_84;
    wrapped_calls[85] = &wrapper_85;
    wrapped_calls[86] = &wrapper_86;
    wrapped_calls[87] = &wrapper_87;
    wrapped_calls[88] = &wrapper_88;
    wrapped_calls[89] = &wrapper_89;
    wrapped_calls[90] = &wrapper_90;
    wrapped_calls[91] = &wrapper_91;
    wrapped_calls[92] = &wrapper_92;
    wrapped_calls[93] = &wrapper_93;
    wrapped_calls[94] = &wrapper_94;
    wrapped_calls[95] = &wrapper_95;
    wrapped_calls[96] = &wrapper_96;
    wrapped_calls[97] = &wrapper_97;
    wrapped_calls[98] = &wrapper_98;
    wrapped_calls[99] = &wrapper_99;
    wrapped_calls[100] = &wrapper_100;
    wrapped_calls[101] = &wrapper_101;
    wrapped_calls[102] = &wrapper_102;
    wrapped_calls[103] = &wrapper_103;
    wrapped_calls[104] = &wrapper_104;
    wrapped_calls[105] = &wrapper_105;
    wrapped_calls[106] = &wrapper_106;
    wrapped_calls[107] = &wrapper_107;
    wrapped_calls[108] = &wrapper_108;
    wrapped_calls[109] = &wrapper_109;
    wrapped_calls[110] = &wrapper_110;
    wrapped_calls[111] = &wrapper_111;
    wrapped_calls[112] = &wrapper_112;
    wrapped_calls[113] = &wrapper_113;
    wrapped_calls[114] = &wrapper_114;
    wrapped_calls[115] = &wrapper_115;
    wrapped_calls[116] = &wrapper_116;
    wrapped_calls[117] = &wrapper_117;
    wrapped_calls[118] = &wrapper_118;
    wrapped_calls[119] = &wrapper_119;
    wrapped_calls[120] = &wrapper_120;
    wrapped_calls[121] = &wrapper_121;
    wrapped_calls[122] = &wrapper_122;
    wrapped_calls[123] = &wrapper_123;
    wrapped_calls[124] = &wrapper_124;
    wrapped_calls[125] = &wrapper_125;
    wrapped_calls[126] = &wrapper_126;
    wrapped_calls[127] = &wrapper_127;
    wrapped_calls[128] = &wrapper_128;
    wrapped_calls[129] = &wrapper_129;
    wrapped_calls[130] = &wrapper_130;
    wrapped_calls[131] = &wrapper_131;
    wrapped_calls[132] = &wrapper_132;
    wrapped_calls[133] = &wrapper_133;
    wrapped_calls[134] = &wrapper_134;
    wrapped_calls[135] = &wrapper_135;
    wrapped_calls[136] = &wrapper_136;
    wrapped_calls[137] = &wrapper_137;
    wrapped_calls[138] = &wrapper_138;
    wrapped_calls[139] = &wrapper_139;
    wrapped_calls[140] = &wrapper_140;
    wrapped_calls[141] = &wrapper_141;
    wrapped_calls[142] = &wrapper_142;
    wrapped_calls[143] = &wrapper_143;
    wrapped_calls[144] = &wrapper_144;
    wrapped_calls[145] = &wrapper_145;
    wrapped_calls[146] = &wrapper_146;
    wrapped_calls[147] = &wrapper_147;
    wrapped_calls[148] = &wrapper_148;
    wrapped_calls[149] = &wrapper_149;
    wrapped_calls[150] = &wrapper_150;
    wrapped_calls[151] = &wrapper_151;
    wrapped_calls[152] = &wrapper_152;
    wrapped_calls[153] = &wrapper_153;
    wrapped_calls[154] = &wrapper_154;
    wrapped_calls[155] = &wrapper_155;
    wrapped_calls[156] = &wrapper_156;
    wrapped_calls[157] = &wrapper_157;
    wrapped_calls[158] = &wrapper_158;
    wrapped_calls[159] = &wrapper_159;
    wrapped_calls[160] = &wrapper_160;
    wrapped_calls[161] = &wrapper_161;
    wrapped_calls[162] = &wrapper_162;
    wrapped_calls[163] = &wrapper_163;
    wrapped_calls[164] = &wrapper_164;
    wrapped_calls[165] = &wrapper_165;
    wrapped_calls[166] = &wrapper_166;
    wrapped_calls[167] = &wrapper_167;
    wrapped_calls[168] = &wrapper_168;
    wrapped_calls[169] = &wrapper_169;
    wrapped_calls[170] = &wrapper_170;
    wrapped_calls[171] = &wrapper_171;
    wrapped_calls[172] = &wrapper_172;
    wrapped_calls[173] = &wrapper_173;
    wrapped_calls[174] = &wrapper_174;
    wrapped_calls[175] = &wrapper_175;
    wrapped_calls[176] = &wrapper_176;
    wrapped_calls[177] = &wrapper_177;
    wrapped_calls[178] = &wrapper_178;
    wrapped_calls[179] = &wrapper_179;
    wrapped_calls[180] = &wrapper_180;
    wrapped_calls[181] = &wrapper_181;
    wrapped_calls[182] = &wrapper_182;
    wrapped_calls[183] = &wrapper_183;
    wrapped_calls[184] = &wrapper_184;
    wrapped_calls[185] = &wrapper_185;
    wrapped_calls[186] = &wrapper_186;
    wrapped_calls[187] = &wrapper_187;
    wrapped_calls[188] = &wrapper_188;
    wrapped_calls[189] = &wrapper_189;
    wrapped_calls[190] = &wrapper_190;
    wrapped_calls[191] = &wrapper_191;
    wrapped_calls[192] = &wrapper_192;
    wrapped_calls[193] = &wrapper_193;
    wrapped_calls[194] = &wrapper_194;
    wrapped_calls[195] = &wrapper_195;
    wrapped_calls[196] = &wrapper_196;
    wrapped_calls[197] = &wrapper_197;
    wrapped_calls[198] = &wrapper_198;
    wrapped_calls[199] = &wrapper_199;
    wrapped_calls[200] = &wrapper_200;
    wrapped_calls[201] = &wrapper_201;
    wrapped_calls[202] = &wrapper_202;
    wrapped_calls[203] = &wrapper_203;
    wrapped_calls[204] = &wrapper_204;
    wrapped_calls[205] = &wrapper_205;
    wrapped_calls[206] = &wrapper_206;
    wrapped_calls[207] = &wrapper_207;
    wrapped_calls[208] = &wrapper_208;
    wrapped_calls[209] = &wrapper_209;
    wrapped_calls[210] = &wrapper_210;
    wrapped_calls[211] = &wrapper_211;
    wrapped_calls[212] = &wrapper_212;
    wrapped_calls[213] = &wrapper_213;
    wrapped_calls[214] = &wrapper_214;
    wrapped_calls[215] = &wrapper_215;
    wrapped_calls[216] = &wrapper_216;
    wrapped_calls[217] = &wrapper_217;
    wrapped_calls[218] = &wrapper_218;
    wrapped_calls[219] = &wrapper_219;
    wrapped_calls[220] = &wrapper_220;
    wrapped_calls[221] = &wrapper_221;
    wrapped_calls[222] = &wrapper_222;
    wrapped_calls[223] = &wrapper_223;
    wrapped_calls[224] = &wrapper_224;
    wrapped_calls[225] = &wrapper_225;
    wrapped_calls[226] = &wrapper_226;
    wrapped_calls[227] = &wrapper_227;
    wrapped_calls[228] = &wrapper_228;
    wrapped_calls[229] = &wrapper_229;
    wrapped_calls[230] = &wrapper_230;
    wrapped_calls[231] = &wrapper_231;
    wrapped_calls[232] = &wrapper_232;
    wrapped_calls[233] = &wrapper_233;
    wrapped_calls[234] = &wrapper_234;
    wrapped_calls[235] = &wrapper_235;
    wrapped_calls[236] = &wrapper_236;
    wrapped_calls[237] = &wrapper_237;
    wrapped_calls[238] = &wrapper_238;
    wrapped_calls[239] = &wrapper_239;
    wrapped_calls[240] = &wrapper_240;
    wrapped_calls[241] = &wrapper_241;
    wrapped_calls[242] = &wrapper_242;
    wrapped_calls[243] = &wrapper_243;
    wrapped_calls[244] = &wrapper_244;
    wrapped_calls[245] = &wrapper_245;
    wrapped_calls[246] = &wrapper_246;
    wrapped_calls[247] = &wrapper_247;
    wrapped_calls[248] = &wrapper_248;
    wrapped_calls[249] = &wrapper_249;
    wrapped_calls[250] = &wrapper_250;
    wrapped_calls[251] = &wrapper_251;
    wrapped_calls[252] = &wrapper_252;
    wrapped_calls[253] = &wrapper_253;
    wrapped_calls[254] = &wrapper_254;
    wrapped_calls[255] = &wrapper_255;
    wrapped_calls[256] = &wrapper_256;
    wrapped_calls[257] = &wrapper_257;
    wrapped_calls[258] = &wrapper_258;
    wrapped_calls[259] = &wrapper_259;
    wrapped_calls[260] = &wrapper_260;
    wrapped_calls[261] = &wrapper_261;
    wrapped_calls[262] = &wrapper_262;
    wrapped_calls[263] = &wrapper_263;
    wrapped_calls[264] = &wrapper_264;
    wrapped_calls[265] = &wrapper_265;
    wrapped_calls[266] = &wrapper_266;
    wrapped_calls[267] = &wrapper_267;
    wrapped_calls[268] = &wrapper_268;
    wrapped_calls[269] = &wrapper_269;
    wrapped_calls[270] = &wrapper_270;
    wrapped_calls[271] = &wrapper_271;
    wrapped_calls[272] = &wrapper_272;
    wrapped_calls[273] = &wrapper_273;
    wrapped_calls[274] = &wrapper_274;
    wrapped_calls[275] = &wrapper_275;
    wrapped_calls[276] = &wrapper_276;
    wrapped_calls[277] = &wrapper_277;
    wrapped_calls[278] = &wrapper_278;
    wrapped_calls[279] = &wrapper_279;
    wrapped_calls[280] = &wrapper_280;
    wrapped_calls[281] = &wrapper_281;
    wrapped_calls[282] = &wrapper_282;
    wrapped_calls[283] = &wrapper_283;
    wrapped_calls[284] = &wrapper_284;
    wrapped_calls[285] = &wrapper_285;
    wrapped_calls[286] = &wrapper_286;
    wrapped_calls[287] = &wrapper_287;
    wrapped_calls[288] = &wrapper_288;
    wrapped_calls[289] = &wrapper_289;
    wrapped_calls[290] = &wrapper_290;
    wrapped_calls[291] = &wrapper_291;
    wrapped_calls[292] = &wrapper_292;
    wrapped_calls[293] = &wrapper_293;
    wrapped_calls[294] = &wrapper_294;
    wrapped_calls[295] = &wrapper_295;
    wrapped_calls[296] = &wrapper_296;
    wrapped_calls[297] = &wrapper_297;
    wrapped_calls[298] = &wrapper_298;
    wrapped_calls[299] = &wrapper_299;
    wrapped_calls[300] = &wrapper_300;
    wrapped_calls[301] = &wrapper_301;
    wrapped_calls[302] = &wrapper_302;
    wrapped_calls[303] = &wrapper_303;
    wrapped_calls[304] = &wrapper_304;
    wrapped_calls[305] = &wrapper_305;
    wrapped_calls[306] = &wrapper_306;
    wrapped_calls[307] = &wrapper_307;
    wrapped_calls[308] = &wrapper_308;
    wrapped_calls[309] = &wrapper_309;
    wrapped_calls[310] = &wrapper_310;
    wrapped_calls[311] = &wrapper_311;
    wrapped_calls[312] = &wrapper_312;
    wrapped_calls[313] = &wrapper_313;
    wrapped_calls[314] = &wrapper_314;
    wrapped_calls[315] = &wrapper_315;
    wrapped_calls[316] = &wrapper_316;
    wrapped_calls[317] = &wrapper_317;
    wrapped_calls[318] = &wrapper_318;
    wrapped_calls[319] = &wrapper_319;
    wrapped_calls[320] = &wrapper_320;
    wrapped_calls[321] = &wrapper_321;
    wrapped_calls[322] = &wrapper_322;
    wrapped_calls[323] = &wrapper_323;
    wrapped_calls[324] = &wrapper_324;
    wrapped_calls[325] = &wrapper_325;
    wrapped_calls[326] = &wrapper_326;
    wrapped_calls[327] = &wrapper_327;
    wrapped_calls[328] = &wrapper_328;
    wrapped_calls[329] = &wrapper_329;
    wrapped_calls[330] = &wrapper_330;
    wrapped_calls[331] = &wrapper_331;
    wrapped_calls[332] = &wrapper_332;
    wrapped_calls[333] = &wrapper_333;
    wrapped_calls[334] = &wrapper_334;
    wrapped_calls[335] = &wrapper_335;
    wrapped_calls[336] = &wrapper_336;
    wrapped_calls[337] = &wrapper_337;
    wrapped_calls[338] = &wrapper_338;
    wrapped_calls[339] = &wrapper_339;
    wrapped_calls[340] = &wrapper_340;
    wrapped_calls[341] = &wrapper_341;
    wrapped_calls[342] = &wrapper_342;
    wrapped_calls[343] = &wrapper_343;
    wrapped_calls[344] = &wrapper_344;
    wrapped_calls[345] = &wrapper_345;
    wrapped_calls[346] = &wrapper_346;
    wrapped_calls[347] = &wrapper_347;
    wrapped_calls[348] = &wrapper_348;
    wrapped_calls[349] = &wrapper_349;
    wrapped_calls[350] = &wrapper_350;
    wrapped_calls[351] = &wrapper_351;
    wrapped_calls[352] = &wrapper_352;
    wrapped_calls[353] = &wrapper_353;
    wrapped_calls[354] = &wrapper_354;
    wrapped_calls[355] = &wrapper_355;
    wrapped_calls[356] = &wrapper_356;
    wrapped_calls[357] = &wrapper_357;
    wrapped_calls[358] = &wrapper_358;
    wrapped_calls[359] = &wrapper_359;
    wrapped_calls[360] = &wrapper_360;
    wrapped_calls[361] = &wrapper_361;
    wrapped_calls[362] = &wrapper_362;
    wrapped_calls[363] = &wrapper_363;
    wrapped_calls[364] = &wrapper_364;
    wrapped_calls[365] = &wrapper_365;
    wrapped_calls[366] = &wrapper_366;
    wrapped_calls[367] = &wrapper_367;
    wrapped_calls[368] = &wrapper_368;
    wrapped_calls[369] = &wrapper_369;
    wrapped_calls[370] = &wrapper_370;
    wrapped_calls[371] = &wrapper_371;
    wrapped_calls[372] = &wrapper_372;
    wrapped_calls[373] = &wrapper_373;
    wrapped_calls[374] = &wrapper_374;
    wrapped_calls[375] = &wrapper_375;
    wrapped_calls[376] = &wrapper_376;
    wrapped_calls[377] = &wrapper_377;
    wrapped_calls[378] = &wrapper_378;
    wrapped_calls[379] = &wrapper_379;
    wrapped_calls[380] = &wrapper_380;
    wrapped_calls[381] = &wrapper_381;
    wrapped_calls[382] = &wrapper_382;
    wrapped_calls[383] = &wrapper_383;
    wrapped_calls[384] = &wrapper_384;
    wrapped_calls[385] = &wrapper_385;
    wrapped_calls[386] = &wrapper_386;
    wrapped_calls[387] = &wrapper_387;
    wrapped_calls[388] = &wrapper_388;
    wrapped_calls[389] = &wrapper_389;
    wrapped_calls[390] = &wrapper_390;
    wrapped_calls[391] = &wrapper_391;
    wrapped_calls[392] = &wrapper_392;
    wrapped_calls[393] = &wrapper_393;
    wrapped_calls[394] = &wrapper_394;
    wrapped_calls[395] = &wrapper_395;
    wrapped_calls[396] = &wrapper_396;
    wrapped_calls[397] = &wrapper_397;
    wrapped_calls[398] = &wrapper_398;
    wrapped_calls[399] = &wrapper_399;
    wrapped_calls[400] = &wrapper_400;
    wrapped_calls[401] = &wrapper_401;
    wrapped_calls[402] = &wrapper_402;
    wrapped_calls[403] = &wrapper_403;
    wrapped_calls[404] = &wrapper_404;
    wrapped_calls[405] = &wrapper_405;
    wrapped_calls[406] = &wrapper_406;
    wrapped_calls[407] = &wrapper_407;
    wrapped_calls[408] = &wrapper_408;
    wrapped_calls[409] = &wrapper_409;
    wrapped_calls[410] = &wrapper_410;
    wrapped_calls[411] = &wrapper_411;
    wrapped_calls[412] = &wrapper_412;
    wrapped_calls[413] = &wrapper_413;
    wrapped_calls[414] = &wrapper_414;
    wrapped_calls[415] = &wrapper_415;
    wrapped_calls[416] = &wrapper_416;
    wrapped_calls[417] = &wrapper_417;
    wrapped_calls[418] = &wrapper_418;
    wrapped_calls[419] = &wrapper_419;
    wrapped_calls[420] = &wrapper_420;
    wrapped_calls[421] = &wrapper_421;
    wrapped_calls[422] = &wrapper_422;
    wrapped_calls[423] = &wrapper_423;
    wrapped_calls[424] = &wrapper_424;
    wrapped_calls[425] = &wrapper_425;
    wrapped_calls[426] = &wrapper_426;
    wrapped_calls[427] = &wrapper_427;
    wrapped_calls[428] = &wrapper_428;
    wrapped_calls[429] = &wrapper_429;
    wrapped_calls[430] = &wrapper_430;
    wrapped_calls[431] = &wrapper_431;
    wrapped_calls[432] = &wrapper_432;
    wrapped_calls[433] = &wrapper_433;
    wrapped_calls[434] = &wrapper_434;
    wrapped_calls[435] = &wrapper_435;
    wrapped_calls[436] = &wrapper_436;
    wrapped_calls[437] = &wrapper_437;
    wrapped_calls[438] = &wrapper_438;
    wrapped_calls[439] = &wrapper_439;
    wrapped_calls[440] = &wrapper_440;
    wrapped_calls[441] = &wrapper_441;
    wrapped_calls[442] = &wrapper_442;
    wrapped_calls[443] = &wrapper_443;
    wrapped_calls[444] = &wrapper_444;
    wrapped_calls[445] = &wrapper_445;
    wrapped_calls[446] = &wrapper_446;
    wrapped_calls[447] = &wrapper_447;
    wrapped_calls[448] = &wrapper_448;
    wrapped_calls[449] = &wrapper_449;
    wrapped_calls[450] = &wrapper_450;
    wrapped_calls[451] = &wrapper_451;
    wrapped_calls[452] = &wrapper_452;
    wrapped_calls[453] = &wrapper_453;
    wrapped_calls[454] = &wrapper_454;
    wrapped_calls[455] = &wrapper_455;
    wrapped_calls[456] = &wrapper_456;
    wrapped_calls[457] = &wrapper_457;
    wrapped_calls[458] = &wrapper_458;
    wrapped_calls[459] = &wrapper_459;
    wrapped_calls[460] = &wrapper_460;
    wrapped_calls[461] = &wrapper_461;
    wrapped_calls[462] = &wrapper_462;
    wrapped_calls[463] = &wrapper_463;
    wrapped_calls[464] = &wrapper_464;
    wrapped_calls[465] = &wrapper_465;
    wrapped_calls[466] = &wrapper_466;
    wrapped_calls[467] = &wrapper_467;
    wrapped_calls[468] = &wrapper_468;
    wrapped_calls[469] = &wrapper_469;
    wrapped_calls[470] = &wrapper_470;
    wrapped_calls[471] = &wrapper_471;
    wrapped_calls[472] = &wrapper_472;
    wrapped_calls[473] = &wrapper_473;
    wrapped_calls[474] = &wrapper_474;
    wrapped_calls[475] = &wrapper_475;
    wrapped_calls[476] = &wrapper_476;
    wrapped_calls[477] = &wrapper_477;
    wrapped_calls[478] = &wrapper_478;
    wrapped_calls[479] = &wrapper_479;
    wrapped_calls[480] = &wrapper_480;
    wrapped_calls[481] = &wrapper_481;
    wrapped_calls[482] = &wrapper_482;
    wrapped_calls[483] = &wrapper_483;
    wrapped_calls[484] = &wrapper_484;
    wrapped_calls[485] = &wrapper_485;
    wrapped_calls[486] = &wrapper_486;
    wrapped_calls[487] = &wrapper_487;
    wrapped_calls[488] = &wrapper_488;
    wrapped_calls[489] = &wrapper_489;
    wrapped_calls[490] = &wrapper_490;
    wrapped_calls[491] = &wrapper_491;
    wrapped_calls[492] = &wrapper_492;
    wrapped_calls[493] = &wrapper_493;
    wrapped_calls[494] = &wrapper_494;
    wrapped_calls[495] = &wrapper_495;
    wrapped_calls[496] = &wrapper_496;
    wrapped_calls[497] = &wrapper_497;
    wrapped_calls[498] = &wrapper_498;
    wrapped_calls[499] = &wrapper_499;
    wrapped_calls[500] = &wrapper_500;
    wrapped_calls[501] = &wrapper_501;
    wrapped_calls[502] = &wrapper_502;
    wrapped_calls[503] = &wrapper_503;
    wrapped_calls[504] = &wrapper_504;
    wrapped_calls[505] = &wrapper_505;
    wrapped_calls[506] = &wrapper_506;
    wrapped_calls[507] = &wrapper_507;
    wrapped_calls[508] = &wrapper_508;
    wrapped_calls[509] = &wrapper_509;
    wrapped_calls[510] = &wrapper_510;
    wrapped_calls[511] = &wrapper_511;
    wrapped_calls[512] = &wrapper_512;
    wrapped_calls[513] = &wrapper_513;
    wrapped_calls[514] = &wrapper_514;
    wrapped_calls[515] = &wrapper_515;
    wrapped_calls[516] = &wrapper_516;
    wrapped_calls[517] = &wrapper_517;
    wrapped_calls[518] = &wrapper_518;
    wrapped_calls[519] = &wrapper_519;
    wrapped_calls[520] = &wrapper_520;
    wrapped_calls[521] = &wrapper_521;
    wrapped_calls[522] = &wrapper_522;
    wrapped_calls[523] = &wrapper_523;
    wrapped_calls[524] = &wrapper_524;
    wrapped_calls[525] = &wrapper_525;
    wrapped_calls[526] = &wrapper_526;
    wrapped_calls[527] = &wrapper_527;
    wrapped_calls[528] = &wrapper_528;
    wrapped_calls[529] = &wrapper_529;
    wrapped_calls[530] = &wrapper_530;
    wrapped_calls[531] = &wrapper_531;
    wrapped_calls[532] = &wrapper_532;
    wrapped_calls[533] = &wrapper_533;
    wrapped_calls[534] = &wrapper_534;
    wrapped_calls[535] = &wrapper_535;
    wrapped_calls[536] = &wrapper_536;
    wrapped_calls[537] = &wrapper_537;
    wrapped_calls[538] = &wrapper_538;
    wrapped_calls[539] = &wrapper_539;
    wrapped_calls[540] = &wrapper_540;
    wrapped_calls[541] = &wrapper_541;
    wrapped_calls[542] = &wrapper_542;
    wrapped_calls[543] = &wrapper_543;
    wrapped_calls[544] = &wrapper_544;
    wrapped_calls[545] = &wrapper_545;
    wrapped_calls[546] = &wrapper_546;
}