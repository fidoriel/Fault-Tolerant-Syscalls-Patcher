
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

asmlinkage long wrapper_24(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 24\n");
    return syscall_wrapper(24, params);
}

asmlinkage long wrapper_25(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 25\n");
    return syscall_wrapper(25, params);
}

asmlinkage long wrapper_26(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 26\n");
    return syscall_wrapper(26, params);
}

asmlinkage long wrapper_27(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 27\n");
    return syscall_wrapper(27, params);
}

asmlinkage long wrapper_28(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 28\n");
    return syscall_wrapper(28, params);
}

asmlinkage long wrapper_29(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 29\n");
    return syscall_wrapper(29, params);
}

asmlinkage long wrapper_30(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 30\n");
    return syscall_wrapper(30, params);
}

asmlinkage long wrapper_31(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 31\n");
    return syscall_wrapper(31, params);
}

asmlinkage long wrapper_32(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 32\n");
    return syscall_wrapper(32, params);
}

asmlinkage long wrapper_33(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 33\n");
    return syscall_wrapper(33, params);
}

asmlinkage long wrapper_34(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 34\n");
    return syscall_wrapper(34, params);
}

asmlinkage long wrapper_35(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 35\n");
    return syscall_wrapper(35, params);
}

asmlinkage long wrapper_36(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 36\n");
    return syscall_wrapper(36, params);
}

asmlinkage long wrapper_37(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 37\n");
    return syscall_wrapper(37, params);
}

asmlinkage long wrapper_38(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 38\n");
    return syscall_wrapper(38, params);
}

asmlinkage long wrapper_39(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 39\n");
    return syscall_wrapper(39, params);
}

asmlinkage long wrapper_40(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 40\n");
    return syscall_wrapper(40, params);
}

asmlinkage long wrapper_41(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 41\n");
    return syscall_wrapper(41, params);
}

asmlinkage long wrapper_42(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 42\n");
    return syscall_wrapper(42, params);
}

asmlinkage long wrapper_43(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 43\n");
    return syscall_wrapper(43, params);
}

asmlinkage long wrapper_44(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 44\n");
    return syscall_wrapper(44, params);
}

asmlinkage long wrapper_45(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 45\n");
    return syscall_wrapper(45, params);
}

asmlinkage long wrapper_46(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 46\n");
    return syscall_wrapper(46, params);
}

asmlinkage long wrapper_47(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 47\n");
    return syscall_wrapper(47, params);
}

asmlinkage long wrapper_48(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 48\n");
    return syscall_wrapper(48, params);
}

asmlinkage long wrapper_49(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 49\n");
    return syscall_wrapper(49, params);
}

asmlinkage long wrapper_50(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 50\n");
    return syscall_wrapper(50, params);
}

asmlinkage long wrapper_51(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 51\n");
    return syscall_wrapper(51, params);
}

asmlinkage long wrapper_52(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 52\n");
    return syscall_wrapper(52, params);
}

asmlinkage long wrapper_53(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 53\n");
    return syscall_wrapper(53, params);
}

asmlinkage long wrapper_54(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 54\n");
    return syscall_wrapper(54, params);
}

asmlinkage long wrapper_55(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 55\n");
    return syscall_wrapper(55, params);
}

asmlinkage long wrapper_56(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 56\n");
    return syscall_wrapper(56, params);
}

asmlinkage long wrapper_57(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 57\n");
    return syscall_wrapper(57, params);
}

asmlinkage long wrapper_58(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 58\n");
    return syscall_wrapper(58, params);
}

asmlinkage long wrapper_59(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 59\n");
    return syscall_wrapper(59, params);
}

asmlinkage long wrapper_60(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 60\n");
    return syscall_wrapper(60, params);
}

asmlinkage long wrapper_61(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 61\n");
    return syscall_wrapper(61, params);
}

asmlinkage long wrapper_62(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 62\n");
    return syscall_wrapper(62, params);
}

asmlinkage long wrapper_63(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 63\n");
    return syscall_wrapper(63, params);
}

asmlinkage long wrapper_64(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 64\n");
    return syscall_wrapper(64, params);
}

asmlinkage long wrapper_65(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 65\n");
    return syscall_wrapper(65, params);
}

asmlinkage long wrapper_66(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 66\n");
    return syscall_wrapper(66, params);
}

asmlinkage long wrapper_67(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 67\n");
    return syscall_wrapper(67, params);
}

asmlinkage long wrapper_68(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 68\n");
    return syscall_wrapper(68, params);
}

asmlinkage long wrapper_69(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 69\n");
    return syscall_wrapper(69, params);
}

asmlinkage long wrapper_70(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 70\n");
    return syscall_wrapper(70, params);
}

asmlinkage long wrapper_71(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 71\n");
    return syscall_wrapper(71, params);
}

asmlinkage long wrapper_72(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 72\n");
    return syscall_wrapper(72, params);
}

asmlinkage long wrapper_73(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 73\n");
    return syscall_wrapper(73, params);
}

asmlinkage long wrapper_74(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 74\n");
    return syscall_wrapper(74, params);
}

asmlinkage long wrapper_75(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 75\n");
    return syscall_wrapper(75, params);
}

asmlinkage long wrapper_76(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 76\n");
    return syscall_wrapper(76, params);
}

asmlinkage long wrapper_77(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 77\n");
    return syscall_wrapper(77, params);
}

asmlinkage long wrapper_78(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 78\n");
    return syscall_wrapper(78, params);
}

asmlinkage long wrapper_79(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 79\n");
    return syscall_wrapper(79, params);
}

asmlinkage long wrapper_80(struct pt_regs *params)
{
    pr_info("[sys_call_patcher] Calling 80\n");
    return syscall_wrapper(80, params);
}

asmlinkage long wrapper_81(struct pt_regs *params)
{
    pr_info("[sys_call_patcher] Calling 81\n");
    return syscall_wrapper(81, params);
}

asmlinkage long wrapper_82(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 82\n");
    return syscall_wrapper(82, params);
}

asmlinkage long wrapper_83(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 83\n");
    return syscall_wrapper(83, params);
}

asmlinkage long wrapper_84(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 84\n");
    return syscall_wrapper(84, params);
}

asmlinkage long wrapper_85(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 85\n");
    return syscall_wrapper(85, params);
}

asmlinkage long wrapper_86(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 86\n");
    return syscall_wrapper(86, params);
}

asmlinkage long wrapper_87(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 87\n");
    return syscall_wrapper(87, params);
}

asmlinkage long wrapper_88(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 88\n");
    return syscall_wrapper(88, params);
}

asmlinkage long wrapper_89(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 89\n");
    return syscall_wrapper(89, params);
}

asmlinkage long wrapper_90(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 90\n");
    return syscall_wrapper(90, params);
}

asmlinkage long wrapper_91(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 91\n");
    return syscall_wrapper(91, params);
}

asmlinkage long wrapper_92(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 92\n");
    return syscall_wrapper(92, params);
}

asmlinkage long wrapper_93(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 93\n");
    return syscall_wrapper(93, params);
}

asmlinkage long wrapper_94(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 94\n");
    return syscall_wrapper(94, params);
}

asmlinkage long wrapper_95(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 95\n");
    return syscall_wrapper(95, params);
}

asmlinkage long wrapper_96(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 96\n");
    return syscall_wrapper(96, params);
}

asmlinkage long wrapper_97(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 97\n");
    return syscall_wrapper(97, params);
}

asmlinkage long wrapper_98(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 98\n");
    return syscall_wrapper(98, params);
}

asmlinkage long wrapper_99(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 99\n");
    return syscall_wrapper(99, params);
}

asmlinkage long wrapper_100(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 100\n");
    return syscall_wrapper(100, params);
}

asmlinkage long wrapper_101(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 101\n");
    return syscall_wrapper(101, params);
}

asmlinkage long wrapper_102(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 102\n");
    return syscall_wrapper(102, params);
}

asmlinkage long wrapper_103(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 103\n");
    return syscall_wrapper(103, params);
}

asmlinkage long wrapper_104(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 104\n");
    return syscall_wrapper(104, params);
}

asmlinkage long wrapper_105(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 105\n");
    return syscall_wrapper(105, params);
}

asmlinkage long wrapper_106(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 106\n");
    return syscall_wrapper(106, params);
}

asmlinkage long wrapper_107(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 107\n");
    return syscall_wrapper(107, params);
}

asmlinkage long wrapper_108(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 108\n");
    return syscall_wrapper(108, params);
}

asmlinkage long wrapper_109(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 109\n");
    return syscall_wrapper(109, params);
}

asmlinkage long wrapper_110(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 110\n");
    return syscall_wrapper(110, params);
}

asmlinkage long wrapper_111(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 111\n");
    return syscall_wrapper(111, params);
}

asmlinkage long wrapper_112(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 112\n");
    return syscall_wrapper(112, params);
}

asmlinkage long wrapper_113(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 113\n");
    return syscall_wrapper(113, params);
}

asmlinkage long wrapper_114(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 114\n");
    return syscall_wrapper(114, params);
}

asmlinkage long wrapper_115(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 115\n");
    return syscall_wrapper(115, params);
}

asmlinkage long wrapper_116(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 116\n");
    return syscall_wrapper(116, params);
}

asmlinkage long wrapper_117(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 117\n");
    return syscall_wrapper(117, params);
}

asmlinkage long wrapper_118(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 118\n");
    return syscall_wrapper(118, params);
}

asmlinkage long wrapper_119(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 119\n");
    return syscall_wrapper(119, params);
}

asmlinkage long wrapper_120(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 120\n");
    return syscall_wrapper(120, params);
}

asmlinkage long wrapper_121(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 121\n");
    return syscall_wrapper(121, params);
}

asmlinkage long wrapper_122(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 122\n");
    return syscall_wrapper(122, params);
}

asmlinkage long wrapper_123(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 123\n");
    return syscall_wrapper(123, params);
}

asmlinkage long wrapper_124(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 124\n");
    return syscall_wrapper(124, params);
}

asmlinkage long wrapper_125(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 125\n");
    return syscall_wrapper(125, params);
}

asmlinkage long wrapper_126(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 126\n");
    return syscall_wrapper(126, params);
}

asmlinkage long wrapper_127(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 127\n");
    return syscall_wrapper(127, params);
}

asmlinkage long wrapper_128(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 128\n");
    return syscall_wrapper(128, params);
}

asmlinkage long wrapper_129(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 129\n");
    return syscall_wrapper(129, params);
}

asmlinkage long wrapper_130(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 130\n");
    return syscall_wrapper(130, params);
}

asmlinkage long wrapper_131(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 131\n");
    return syscall_wrapper(131, params);
}

asmlinkage long wrapper_132(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 132\n");
    return syscall_wrapper(132, params);
}

asmlinkage long wrapper_133(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 133\n");
    return syscall_wrapper(133, params);
}

asmlinkage long wrapper_134(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 134\n");
    return syscall_wrapper(134, params);
}

asmlinkage long wrapper_135(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 135\n");
    return syscall_wrapper(135, params);
}

asmlinkage long wrapper_136(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 136\n");
    return syscall_wrapper(136, params);
}

asmlinkage long wrapper_137(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 137\n");
    return syscall_wrapper(137, params);
}

asmlinkage long wrapper_138(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 138\n");
    return syscall_wrapper(138, params);
}

asmlinkage long wrapper_139(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 139\n");
    return syscall_wrapper(139, params);
}

asmlinkage long wrapper_140(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 140\n");
    return syscall_wrapper(140, params);
}

asmlinkage long wrapper_141(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 141\n");
    return syscall_wrapper(141, params);
}

asmlinkage long wrapper_142(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 142\n");
    return syscall_wrapper(142, params);
}

asmlinkage long wrapper_143(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 143\n");
    return syscall_wrapper(143, params);
}

asmlinkage long wrapper_144(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 144\n");
    return syscall_wrapper(144, params);
}

asmlinkage long wrapper_145(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 145\n");
    return syscall_wrapper(145, params);
}

asmlinkage long wrapper_146(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 146\n");
    return syscall_wrapper(146, params);
}

asmlinkage long wrapper_147(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 147\n");
    return syscall_wrapper(147, params);
}

asmlinkage long wrapper_148(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 148\n");
    return syscall_wrapper(148, params);
}

asmlinkage long wrapper_149(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 149\n");
    return syscall_wrapper(149, params);
}

asmlinkage long wrapper_150(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 150\n");
    return syscall_wrapper(150, params);
}

asmlinkage long wrapper_151(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 151\n");
    return syscall_wrapper(151, params);
}

asmlinkage long wrapper_152(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 152\n");
    return syscall_wrapper(152, params);
}

asmlinkage long wrapper_153(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 153\n");
    return syscall_wrapper(153, params);
}

asmlinkage long wrapper_154(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 154\n");
    return syscall_wrapper(154, params);
}

asmlinkage long wrapper_155(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 155\n");
    return syscall_wrapper(155, params);
}

asmlinkage long wrapper_156(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 156\n");
    return syscall_wrapper(156, params);
}

asmlinkage long wrapper_157(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 157\n");
    return syscall_wrapper(157, params);
}

asmlinkage long wrapper_158(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 158\n");
    return syscall_wrapper(158, params);
}

asmlinkage long wrapper_159(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 159\n");
    return syscall_wrapper(159, params);
}

asmlinkage long wrapper_160(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 160\n");
    return syscall_wrapper(160, params);
}

asmlinkage long wrapper_161(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 161\n");
    return syscall_wrapper(161, params);
}

asmlinkage long wrapper_162(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 162\n");
    return syscall_wrapper(162, params);
}

asmlinkage long wrapper_163(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 163\n");
    return syscall_wrapper(163, params);
}

asmlinkage long wrapper_164(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 164\n");
    return syscall_wrapper(164, params);
}

asmlinkage long wrapper_165(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 165\n");
    return syscall_wrapper(165, params);
}

asmlinkage long wrapper_166(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 166\n");
    return syscall_wrapper(166, params);
}

asmlinkage long wrapper_167(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 167\n");
    return syscall_wrapper(167, params);
}

asmlinkage long wrapper_168(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 168\n");
    return syscall_wrapper(168, params);
}

asmlinkage long wrapper_169(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 169\n");
    return syscall_wrapper(169, params);
}

asmlinkage long wrapper_170(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 170\n");
    return syscall_wrapper(170, params);
}

asmlinkage long wrapper_171(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 171\n");
    return syscall_wrapper(171, params);
}

asmlinkage long wrapper_172(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 172\n");
    return syscall_wrapper(172, params);
}

asmlinkage long wrapper_173(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 173\n");
    return syscall_wrapper(173, params);
}

asmlinkage long wrapper_174(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 174\n");
    return syscall_wrapper(174, params);
}

asmlinkage long wrapper_175(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 175\n");
    return syscall_wrapper(175, params);
}

asmlinkage long wrapper_176(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 176\n");
    return syscall_wrapper(176, params);
}

asmlinkage long wrapper_177(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 177\n");
    return syscall_wrapper(177, params);
}

asmlinkage long wrapper_178(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 178\n");
    return syscall_wrapper(178, params);
}

asmlinkage long wrapper_179(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 179\n");
    return syscall_wrapper(179, params);
}

asmlinkage long wrapper_180(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 180\n");
    return syscall_wrapper(180, params);
}

asmlinkage long wrapper_181(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 181\n");
    return syscall_wrapper(181, params);
}

asmlinkage long wrapper_182(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 182\n");
    return syscall_wrapper(182, params);
}

asmlinkage long wrapper_183(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 183\n");
    return syscall_wrapper(183, params);
}

asmlinkage long wrapper_184(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 184\n");
    return syscall_wrapper(184, params);
}

asmlinkage long wrapper_185(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 185\n");
    return syscall_wrapper(185, params);
}

asmlinkage long wrapper_186(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 186\n");
    return syscall_wrapper(186, params);
}

asmlinkage long wrapper_187(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 187\n");
    return syscall_wrapper(187, params);
}

asmlinkage long wrapper_188(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 188\n");
    return syscall_wrapper(188, params);
}

asmlinkage long wrapper_189(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 189\n");
    return syscall_wrapper(189, params);
}

asmlinkage long wrapper_190(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 190\n");
    return syscall_wrapper(190, params);
}

asmlinkage long wrapper_191(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 191\n");
    return syscall_wrapper(191, params);
}

asmlinkage long wrapper_192(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 192\n");
    return syscall_wrapper(192, params);
}

asmlinkage long wrapper_193(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 193\n");
    return syscall_wrapper(193, params);
}

asmlinkage long wrapper_194(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 194\n");
    return syscall_wrapper(194, params);
}

asmlinkage long wrapper_195(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 195\n");
    return syscall_wrapper(195, params);
}

asmlinkage long wrapper_196(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 196\n");
    return syscall_wrapper(196, params);
}

asmlinkage long wrapper_197(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 197\n");
    return syscall_wrapper(197, params);
}

asmlinkage long wrapper_198(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 198\n");
    return syscall_wrapper(198, params);
}

asmlinkage long wrapper_199(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 199\n");
    return syscall_wrapper(199, params);
}

asmlinkage long wrapper_200(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 200\n");
    return syscall_wrapper(200, params);
}

asmlinkage long wrapper_201(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 201\n");
    return syscall_wrapper(201, params);
}

asmlinkage long wrapper_202(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 202\n");
    return syscall_wrapper(202, params);
}

asmlinkage long wrapper_203(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 203\n");
    return syscall_wrapper(203, params);
}

asmlinkage long wrapper_204(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 204\n");
    return syscall_wrapper(204, params);
}

asmlinkage long wrapper_205(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 205\n");
    return syscall_wrapper(205, params);
}

asmlinkage long wrapper_206(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 206\n");
    return syscall_wrapper(206, params);
}

asmlinkage long wrapper_207(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 207\n");
    return syscall_wrapper(207, params);
}

asmlinkage long wrapper_208(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 208\n");
    return syscall_wrapper(208, params);
}

asmlinkage long wrapper_209(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 209\n");
    return syscall_wrapper(209, params);
}

asmlinkage long wrapper_210(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 210\n");
    return syscall_wrapper(210, params);
}

asmlinkage long wrapper_211(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 211\n");
    return syscall_wrapper(211, params);
}

asmlinkage long wrapper_212(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 212\n");
    return syscall_wrapper(212, params);
}

asmlinkage long wrapper_213(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 213\n");
    return syscall_wrapper(213, params);
}

asmlinkage long wrapper_214(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 214\n");
    return syscall_wrapper(214, params);
}

asmlinkage long wrapper_215(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 215\n");
    return syscall_wrapper(215, params);
}

asmlinkage long wrapper_216(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 216\n");
    return syscall_wrapper(216, params);
}

asmlinkage long wrapper_217(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 217\n");
    return syscall_wrapper(217, params);
}

asmlinkage long wrapper_218(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 218\n");
    return syscall_wrapper(218, params);
}

asmlinkage long wrapper_219(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 219\n");
    return syscall_wrapper(219, params);
}

asmlinkage long wrapper_220(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 220\n");
    return syscall_wrapper(220, params);
}

asmlinkage long wrapper_221(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 221\n");
    return syscall_wrapper(221, params);
}

asmlinkage long wrapper_222(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 222\n");
    return syscall_wrapper(222, params);
}

asmlinkage long wrapper_223(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 223\n");
    return syscall_wrapper(223, params);
}

asmlinkage long wrapper_224(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 224\n");
    return syscall_wrapper(224, params);
}

asmlinkage long wrapper_225(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 225\n");
    return syscall_wrapper(225, params);
}

asmlinkage long wrapper_226(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 226\n");
    return syscall_wrapper(226, params);
}

asmlinkage long wrapper_227(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 227\n");
    return syscall_wrapper(227, params);
}

asmlinkage long wrapper_228(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 228\n");
    return syscall_wrapper(228, params);
}

asmlinkage long wrapper_229(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 229\n");
    return syscall_wrapper(229, params);
}

asmlinkage long wrapper_230(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 230\n");
    return syscall_wrapper(230, params);
}

asmlinkage long wrapper_231(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 231\n");
    return syscall_wrapper(231, params);
}

asmlinkage long wrapper_232(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 232\n");
    return syscall_wrapper(232, params);
}

asmlinkage long wrapper_233(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 233\n");
    return syscall_wrapper(233, params);
}

asmlinkage long wrapper_234(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 234\n");
    return syscall_wrapper(234, params);
}

asmlinkage long wrapper_235(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 235\n");
    return syscall_wrapper(235, params);
}

asmlinkage long wrapper_236(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 236\n");
    return syscall_wrapper(236, params);
}

asmlinkage long wrapper_237(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 237\n");
    return syscall_wrapper(237, params);
}

asmlinkage long wrapper_238(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 238\n");
    return syscall_wrapper(238, params);
}

asmlinkage long wrapper_239(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 239\n");
    return syscall_wrapper(239, params);
}

asmlinkage long wrapper_240(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 240\n");
    return syscall_wrapper(240, params);
}

asmlinkage long wrapper_241(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 241\n");
    return syscall_wrapper(241, params);
}

asmlinkage long wrapper_242(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 242\n");
    return syscall_wrapper(242, params);
}

asmlinkage long wrapper_243(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 243\n");
    return syscall_wrapper(243, params);
}

asmlinkage long wrapper_244(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 244\n");
    return syscall_wrapper(244, params);
}

asmlinkage long wrapper_245(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 245\n");
    return syscall_wrapper(245, params);
}

asmlinkage long wrapper_246(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 246\n");
    return syscall_wrapper(246, params);
}

asmlinkage long wrapper_247(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 247\n");
    return syscall_wrapper(247, params);
}

asmlinkage long wrapper_248(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 248\n");
    return syscall_wrapper(248, params);
}

asmlinkage long wrapper_249(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 249\n");
    return syscall_wrapper(249, params);
}

asmlinkage long wrapper_250(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 250\n");
    return syscall_wrapper(250, params);
}

asmlinkage long wrapper_251(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 251\n");
    return syscall_wrapper(251, params);
}

asmlinkage long wrapper_252(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 252\n");
    return syscall_wrapper(252, params);
}

asmlinkage long wrapper_253(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 253\n");
    return syscall_wrapper(253, params);
}

asmlinkage long wrapper_254(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 254\n");
    return syscall_wrapper(254, params);
}

asmlinkage long wrapper_255(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 255\n");
    return syscall_wrapper(255, params);
}

asmlinkage long wrapper_256(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 256\n");
    return syscall_wrapper(256, params);
}

asmlinkage long wrapper_257(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 257\n");
    return syscall_wrapper(257, params);
}

asmlinkage long wrapper_258(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 258\n");
    return syscall_wrapper(258, params);
}

asmlinkage long wrapper_259(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 259\n");
    return syscall_wrapper(259, params);
}

asmlinkage long wrapper_260(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 260\n");
    return syscall_wrapper(260, params);
}

asmlinkage long wrapper_261(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 261\n");
    return syscall_wrapper(261, params);
}

asmlinkage long wrapper_262(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 262\n");
    return syscall_wrapper(262, params);
}

asmlinkage long wrapper_263(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 263\n");
    return syscall_wrapper(263, params);
}

asmlinkage long wrapper_264(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 264\n");
    return syscall_wrapper(264, params);
}

asmlinkage long wrapper_265(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 265\n");
    return syscall_wrapper(265, params);
}

asmlinkage long wrapper_266(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 266\n");
    return syscall_wrapper(266, params);
}

asmlinkage long wrapper_267(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 267\n");
    return syscall_wrapper(267, params);
}

asmlinkage long wrapper_268(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 268\n");
    return syscall_wrapper(268, params);
}

asmlinkage long wrapper_269(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 269\n");
    return syscall_wrapper(269, params);
}

asmlinkage long wrapper_270(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 270\n");
    return syscall_wrapper(270, params);
}

asmlinkage long wrapper_271(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 271\n");
    return syscall_wrapper(271, params);
}

asmlinkage long wrapper_272(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 272\n");
    return syscall_wrapper(272, params);
}

asmlinkage long wrapper_273(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 273\n");
    return syscall_wrapper(273, params);
}

asmlinkage long wrapper_274(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 274\n");
    return syscall_wrapper(274, params);
}

asmlinkage long wrapper_275(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 275\n");
    return syscall_wrapper(275, params);
}

asmlinkage long wrapper_276(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 276\n");
    return syscall_wrapper(276, params);
}

asmlinkage long wrapper_277(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 277\n");
    return syscall_wrapper(277, params);
}

asmlinkage long wrapper_278(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 278\n");
    return syscall_wrapper(278, params);
}

asmlinkage long wrapper_279(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 279\n");
    return syscall_wrapper(279, params);
}

asmlinkage long wrapper_280(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 280\n");
    return syscall_wrapper(280, params);
}

asmlinkage long wrapper_281(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 281\n");
    return syscall_wrapper(281, params);
}

asmlinkage long wrapper_282(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 282\n");
    return syscall_wrapper(282, params);
}

asmlinkage long wrapper_283(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 283\n");
    return syscall_wrapper(283, params);
}

asmlinkage long wrapper_284(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 284\n");
    return syscall_wrapper(284, params);
}

asmlinkage long wrapper_285(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 285\n");
    return syscall_wrapper(285, params);
}

asmlinkage long wrapper_286(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 286\n");
    return syscall_wrapper(286, params);
}

asmlinkage long wrapper_287(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 287\n");
    return syscall_wrapper(287, params);
}

asmlinkage long wrapper_288(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 288\n");
    return syscall_wrapper(288, params);
}

asmlinkage long wrapper_289(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 289\n");
    return syscall_wrapper(289, params);
}

asmlinkage long wrapper_290(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 290\n");
    return syscall_wrapper(290, params);
}

asmlinkage long wrapper_291(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 291\n");
    return syscall_wrapper(291, params);
}

asmlinkage long wrapper_292(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 292\n");
    return syscall_wrapper(292, params);
}

asmlinkage long wrapper_293(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 293\n");
    return syscall_wrapper(293, params);
}

asmlinkage long wrapper_294(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 294\n");
    return syscall_wrapper(294, params);
}

asmlinkage long wrapper_295(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 295\n");
    return syscall_wrapper(295, params);
}

asmlinkage long wrapper_296(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 296\n");
    return syscall_wrapper(296, params);
}

asmlinkage long wrapper_297(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 297\n");
    return syscall_wrapper(297, params);
}

asmlinkage long wrapper_298(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 298\n");
    return syscall_wrapper(298, params);
}

asmlinkage long wrapper_299(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 299\n");
    return syscall_wrapper(299, params);
}

asmlinkage long wrapper_300(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 300\n");
    return syscall_wrapper(300, params);
}

asmlinkage long wrapper_301(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 301\n");
    return syscall_wrapper(301, params);
}

asmlinkage long wrapper_302(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 302\n");
    return syscall_wrapper(302, params);
}

asmlinkage long wrapper_303(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 303\n");
    return syscall_wrapper(303, params);
}

asmlinkage long wrapper_304(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 304\n");
    return syscall_wrapper(304, params);
}

asmlinkage long wrapper_305(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 305\n");
    return syscall_wrapper(305, params);
}

asmlinkage long wrapper_306(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 306\n");
    return syscall_wrapper(306, params);
}

asmlinkage long wrapper_307(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 307\n");
    return syscall_wrapper(307, params);
}

asmlinkage long wrapper_308(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 308\n");
    return syscall_wrapper(308, params);
}

asmlinkage long wrapper_309(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 309\n");
    return syscall_wrapper(309, params);
}

asmlinkage long wrapper_310(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 310\n");
    return syscall_wrapper(310, params);
}

asmlinkage long wrapper_311(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 311\n");
    return syscall_wrapper(311, params);
}

asmlinkage long wrapper_312(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 312\n");
    return syscall_wrapper(312, params);
}

asmlinkage long wrapper_313(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 313\n");
    return syscall_wrapper(313, params);
}

asmlinkage long wrapper_314(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 314\n");
    return syscall_wrapper(314, params);
}

asmlinkage long wrapper_315(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 315\n");
    return syscall_wrapper(315, params);
}

asmlinkage long wrapper_316(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 316\n");
    return syscall_wrapper(316, params);
}

asmlinkage long wrapper_317(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 317\n");
    return syscall_wrapper(317, params);
}

asmlinkage long wrapper_318(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 318\n");
    return syscall_wrapper(318, params);
}

asmlinkage long wrapper_319(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 319\n");
    return syscall_wrapper(319, params);
}

asmlinkage long wrapper_320(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 320\n");
    return syscall_wrapper(320, params);
}

asmlinkage long wrapper_321(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 321\n");
    return syscall_wrapper(321, params);
}

asmlinkage long wrapper_322(struct pt_regs *params)
{
    // pr_info("[sys_call_patcher] Calling 322\n");
    return syscall_wrapper(322, params);
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
    wrapped_calls_ary[24] = &wrapper_24;
    wrapped_calls_ary[25] = &wrapper_25;
    wrapped_calls_ary[26] = &wrapper_26;
    wrapped_calls_ary[27] = &wrapper_27;
    wrapped_calls_ary[28] = &wrapper_28;
    wrapped_calls_ary[29] = &wrapper_29;
    wrapped_calls_ary[30] = &wrapper_30;
    wrapped_calls_ary[31] = &wrapper_31;
    wrapped_calls_ary[32] = &wrapper_32;
    wrapped_calls_ary[33] = &wrapper_33;
    wrapped_calls_ary[34] = &wrapper_34;
    wrapped_calls_ary[35] = &wrapper_35;
    wrapped_calls_ary[36] = &wrapper_36;
    wrapped_calls_ary[37] = &wrapper_37;
    wrapped_calls_ary[38] = &wrapper_38;
    wrapped_calls_ary[39] = &wrapper_39;
    wrapped_calls_ary[40] = &wrapper_40;
    wrapped_calls_ary[41] = &wrapper_41;
    wrapped_calls_ary[42] = &wrapper_42;
    wrapped_calls_ary[43] = &wrapper_43;
    wrapped_calls_ary[44] = &wrapper_44;
    wrapped_calls_ary[45] = &wrapper_45;
    wrapped_calls_ary[46] = &wrapper_46;
    wrapped_calls_ary[47] = &wrapper_47;
    wrapped_calls_ary[48] = &wrapper_48;
    wrapped_calls_ary[49] = &wrapper_49;
    wrapped_calls_ary[50] = &wrapper_50;
    wrapped_calls_ary[51] = &wrapper_51;
    wrapped_calls_ary[52] = &wrapper_52;
    wrapped_calls_ary[53] = &wrapper_53;
    wrapped_calls_ary[54] = &wrapper_54;
    wrapped_calls_ary[55] = &wrapper_55;
    wrapped_calls_ary[56] = &wrapper_56;
    wrapped_calls_ary[57] = &wrapper_57;
    wrapped_calls_ary[58] = &wrapper_58;
    wrapped_calls_ary[59] = &wrapper_59;
    wrapped_calls_ary[60] = &wrapper_60;
    wrapped_calls_ary[61] = &wrapper_61;
    wrapped_calls_ary[62] = &wrapper_62;
    wrapped_calls_ary[63] = &wrapper_63;
    wrapped_calls_ary[64] = &wrapper_64;
    wrapped_calls_ary[65] = &wrapper_65;
    wrapped_calls_ary[66] = &wrapper_66;
    wrapped_calls_ary[67] = &wrapper_67;
    wrapped_calls_ary[68] = &wrapper_68;
    wrapped_calls_ary[69] = &wrapper_69;
    wrapped_calls_ary[70] = &wrapper_70;
    wrapped_calls_ary[71] = &wrapper_71;
    wrapped_calls_ary[72] = &wrapper_72;
    wrapped_calls_ary[73] = &wrapper_73;
    wrapped_calls_ary[74] = &wrapper_74;
    wrapped_calls_ary[75] = &wrapper_75;
    wrapped_calls_ary[76] = &wrapper_76;
    wrapped_calls_ary[77] = &wrapper_77;
    wrapped_calls_ary[78] = &wrapper_78;
    wrapped_calls_ary[79] = &wrapper_79;
    wrapped_calls_ary[80] = &wrapper_80;
    wrapped_calls_ary[81] = &wrapper_81;
    wrapped_calls_ary[82] = &wrapper_82;
    wrapped_calls_ary[83] = &wrapper_83;
    wrapped_calls_ary[84] = &wrapper_84;
    wrapped_calls_ary[85] = &wrapper_85;
    wrapped_calls_ary[86] = &wrapper_86;
    wrapped_calls_ary[87] = &wrapper_87;
    wrapped_calls_ary[88] = &wrapper_88;
    wrapped_calls_ary[89] = &wrapper_89;
    wrapped_calls_ary[90] = &wrapper_90;
    wrapped_calls_ary[91] = &wrapper_91;
    wrapped_calls_ary[92] = &wrapper_92;
    wrapped_calls_ary[93] = &wrapper_93;
    wrapped_calls_ary[94] = &wrapper_94;
    wrapped_calls_ary[95] = &wrapper_95;
    wrapped_calls_ary[96] = &wrapper_96;
    wrapped_calls_ary[97] = &wrapper_97;
    wrapped_calls_ary[98] = &wrapper_98;
    wrapped_calls_ary[99] = &wrapper_99;
    wrapped_calls_ary[100] = &wrapper_100;
    wrapped_calls_ary[101] = &wrapper_101;
    wrapped_calls_ary[102] = &wrapper_102;
    wrapped_calls_ary[103] = &wrapper_103;
    wrapped_calls_ary[104] = &wrapper_104;
    wrapped_calls_ary[105] = &wrapper_105;
    wrapped_calls_ary[106] = &wrapper_106;
    wrapped_calls_ary[107] = &wrapper_107;
    wrapped_calls_ary[108] = &wrapper_108;
    wrapped_calls_ary[109] = &wrapper_109;
    wrapped_calls_ary[110] = &wrapper_110;
    wrapped_calls_ary[111] = &wrapper_111;
    wrapped_calls_ary[112] = &wrapper_112;
    wrapped_calls_ary[113] = &wrapper_113;
    wrapped_calls_ary[114] = &wrapper_114;
    wrapped_calls_ary[115] = &wrapper_115;
    wrapped_calls_ary[116] = &wrapper_116;
    wrapped_calls_ary[117] = &wrapper_117;
    wrapped_calls_ary[118] = &wrapper_118;
    wrapped_calls_ary[119] = &wrapper_119;
    wrapped_calls_ary[120] = &wrapper_120;
    wrapped_calls_ary[121] = &wrapper_121;
    wrapped_calls_ary[122] = &wrapper_122;
    wrapped_calls_ary[123] = &wrapper_123;
    wrapped_calls_ary[124] = &wrapper_124;
    wrapped_calls_ary[125] = &wrapper_125;
    wrapped_calls_ary[126] = &wrapper_126;
    wrapped_calls_ary[127] = &wrapper_127;
    wrapped_calls_ary[128] = &wrapper_128;
    wrapped_calls_ary[129] = &wrapper_129;
    wrapped_calls_ary[130] = &wrapper_130;
    wrapped_calls_ary[131] = &wrapper_131;
    wrapped_calls_ary[132] = &wrapper_132;
    wrapped_calls_ary[133] = &wrapper_133;
    wrapped_calls_ary[134] = &wrapper_134;
    wrapped_calls_ary[135] = &wrapper_135;
    wrapped_calls_ary[136] = &wrapper_136;
    wrapped_calls_ary[137] = &wrapper_137;
    wrapped_calls_ary[138] = &wrapper_138;
    wrapped_calls_ary[139] = &wrapper_139;
    wrapped_calls_ary[140] = &wrapper_140;
    wrapped_calls_ary[141] = &wrapper_141;
    wrapped_calls_ary[142] = &wrapper_142;
    wrapped_calls_ary[143] = &wrapper_143;
    wrapped_calls_ary[144] = &wrapper_144;
    wrapped_calls_ary[145] = &wrapper_145;
    wrapped_calls_ary[146] = &wrapper_146;
    wrapped_calls_ary[147] = &wrapper_147;
    wrapped_calls_ary[148] = &wrapper_148;
    wrapped_calls_ary[149] = &wrapper_149;
    wrapped_calls_ary[150] = &wrapper_150;
    wrapped_calls_ary[151] = &wrapper_151;
    wrapped_calls_ary[152] = &wrapper_152;
    wrapped_calls_ary[153] = &wrapper_153;
    wrapped_calls_ary[154] = &wrapper_154;
    wrapped_calls_ary[155] = &wrapper_155;
    wrapped_calls_ary[156] = &wrapper_156;
    wrapped_calls_ary[157] = &wrapper_157;
    wrapped_calls_ary[158] = &wrapper_158;
    wrapped_calls_ary[159] = &wrapper_159;
    wrapped_calls_ary[160] = &wrapper_160;
    wrapped_calls_ary[161] = &wrapper_161;
    wrapped_calls_ary[162] = &wrapper_162;
    wrapped_calls_ary[163] = &wrapper_163;
    wrapped_calls_ary[164] = &wrapper_164;
    wrapped_calls_ary[165] = &wrapper_165;
    wrapped_calls_ary[166] = &wrapper_166;
    wrapped_calls_ary[167] = &wrapper_167;
    wrapped_calls_ary[168] = &wrapper_168;
    wrapped_calls_ary[169] = &wrapper_169;
    wrapped_calls_ary[170] = &wrapper_170;
    wrapped_calls_ary[171] = &wrapper_171;
    wrapped_calls_ary[172] = &wrapper_172;
    wrapped_calls_ary[173] = &wrapper_173;
    wrapped_calls_ary[174] = &wrapper_174;
    wrapped_calls_ary[175] = &wrapper_175;
    wrapped_calls_ary[176] = &wrapper_176;
    wrapped_calls_ary[177] = &wrapper_177;
    wrapped_calls_ary[178] = &wrapper_178;
    wrapped_calls_ary[179] = &wrapper_179;
    wrapped_calls_ary[180] = &wrapper_180;
    wrapped_calls_ary[181] = &wrapper_181;
    wrapped_calls_ary[182] = &wrapper_182;
    wrapped_calls_ary[183] = &wrapper_183;
    wrapped_calls_ary[184] = &wrapper_184;
    wrapped_calls_ary[185] = &wrapper_185;
    wrapped_calls_ary[186] = &wrapper_186;
    wrapped_calls_ary[187] = &wrapper_187;
    wrapped_calls_ary[188] = &wrapper_188;
    wrapped_calls_ary[189] = &wrapper_189;
    wrapped_calls_ary[190] = &wrapper_190;
    wrapped_calls_ary[191] = &wrapper_191;
    wrapped_calls_ary[192] = &wrapper_192;
    wrapped_calls_ary[193] = &wrapper_193;
    wrapped_calls_ary[194] = &wrapper_194;
    wrapped_calls_ary[195] = &wrapper_195;
    wrapped_calls_ary[196] = &wrapper_196;
    wrapped_calls_ary[197] = &wrapper_197;
    wrapped_calls_ary[198] = &wrapper_198;
    wrapped_calls_ary[199] = &wrapper_199;
    wrapped_calls_ary[200] = &wrapper_200;
    wrapped_calls_ary[201] = &wrapper_201;
    wrapped_calls_ary[202] = &wrapper_202;
    wrapped_calls_ary[203] = &wrapper_203;
    wrapped_calls_ary[204] = &wrapper_204;
    wrapped_calls_ary[205] = &wrapper_205;
    wrapped_calls_ary[206] = &wrapper_206;
    wrapped_calls_ary[207] = &wrapper_207;
    wrapped_calls_ary[208] = &wrapper_208;
    wrapped_calls_ary[209] = &wrapper_209;
    wrapped_calls_ary[210] = &wrapper_210;
    wrapped_calls_ary[211] = &wrapper_211;
    wrapped_calls_ary[212] = &wrapper_212;
    wrapped_calls_ary[213] = &wrapper_213;
    wrapped_calls_ary[214] = &wrapper_214;
    wrapped_calls_ary[215] = &wrapper_215;
    wrapped_calls_ary[216] = &wrapper_216;
    wrapped_calls_ary[217] = &wrapper_217;
    wrapped_calls_ary[218] = &wrapper_218;
    wrapped_calls_ary[219] = &wrapper_219;
    wrapped_calls_ary[220] = &wrapper_220;
    wrapped_calls_ary[221] = &wrapper_221;
    wrapped_calls_ary[222] = &wrapper_222;
    wrapped_calls_ary[223] = &wrapper_223;
    wrapped_calls_ary[224] = &wrapper_224;
    wrapped_calls_ary[225] = &wrapper_225;
    wrapped_calls_ary[226] = &wrapper_226;
    wrapped_calls_ary[227] = &wrapper_227;
    wrapped_calls_ary[228] = &wrapper_228;
    wrapped_calls_ary[229] = &wrapper_229;
    wrapped_calls_ary[230] = &wrapper_230;
    wrapped_calls_ary[231] = &wrapper_231;
    wrapped_calls_ary[232] = &wrapper_232;
    wrapped_calls_ary[233] = &wrapper_233;
    wrapped_calls_ary[234] = &wrapper_234;
    wrapped_calls_ary[235] = &wrapper_235;
    wrapped_calls_ary[236] = &wrapper_236;
    wrapped_calls_ary[237] = &wrapper_237;
    wrapped_calls_ary[238] = &wrapper_238;
    wrapped_calls_ary[239] = &wrapper_239;
    wrapped_calls_ary[240] = &wrapper_240;
    wrapped_calls_ary[241] = &wrapper_241;
    wrapped_calls_ary[242] = &wrapper_242;
    wrapped_calls_ary[243] = &wrapper_243;
    wrapped_calls_ary[244] = &wrapper_244;
    wrapped_calls_ary[245] = &wrapper_245;
    wrapped_calls_ary[246] = &wrapper_246;
    wrapped_calls_ary[247] = &wrapper_247;
    wrapped_calls_ary[248] = &wrapper_248;
    wrapped_calls_ary[249] = &wrapper_249;
    wrapped_calls_ary[250] = &wrapper_250;
    wrapped_calls_ary[251] = &wrapper_251;
    wrapped_calls_ary[252] = &wrapper_252;
    wrapped_calls_ary[253] = &wrapper_253;
    wrapped_calls_ary[254] = &wrapper_254;
    wrapped_calls_ary[255] = &wrapper_255;
    wrapped_calls_ary[256] = &wrapper_256;
    wrapped_calls_ary[257] = &wrapper_257;
    wrapped_calls_ary[258] = &wrapper_258;
    wrapped_calls_ary[259] = &wrapper_259;
    wrapped_calls_ary[260] = &wrapper_260;
    wrapped_calls_ary[261] = &wrapper_261;
    wrapped_calls_ary[262] = &wrapper_262;
    wrapped_calls_ary[263] = &wrapper_263;
    wrapped_calls_ary[264] = &wrapper_264;
    wrapped_calls_ary[265] = &wrapper_265;
    wrapped_calls_ary[266] = &wrapper_266;
    wrapped_calls_ary[267] = &wrapper_267;
    wrapped_calls_ary[268] = &wrapper_268;
    wrapped_calls_ary[269] = &wrapper_269;
    wrapped_calls_ary[270] = &wrapper_270;
    wrapped_calls_ary[271] = &wrapper_271;
    wrapped_calls_ary[272] = &wrapper_272;
    wrapped_calls_ary[273] = &wrapper_273;
    wrapped_calls_ary[274] = &wrapper_274;
    wrapped_calls_ary[275] = &wrapper_275;
    wrapped_calls_ary[276] = &wrapper_276;
    wrapped_calls_ary[277] = &wrapper_277;
    wrapped_calls_ary[278] = &wrapper_278;
    wrapped_calls_ary[279] = &wrapper_279;
    wrapped_calls_ary[280] = &wrapper_280;
    wrapped_calls_ary[281] = &wrapper_281;
    wrapped_calls_ary[282] = &wrapper_282;
    wrapped_calls_ary[283] = &wrapper_283;
    wrapped_calls_ary[284] = &wrapper_284;
    wrapped_calls_ary[285] = &wrapper_285;
    wrapped_calls_ary[286] = &wrapper_286;
    wrapped_calls_ary[287] = &wrapper_287;
    wrapped_calls_ary[288] = &wrapper_288;
    wrapped_calls_ary[289] = &wrapper_289;
    wrapped_calls_ary[290] = &wrapper_290;
    wrapped_calls_ary[291] = &wrapper_291;
    wrapped_calls_ary[292] = &wrapper_292;
    wrapped_calls_ary[293] = &wrapper_293;
    wrapped_calls_ary[294] = &wrapper_294;
    wrapped_calls_ary[295] = &wrapper_295;
    wrapped_calls_ary[296] = &wrapper_296;
    wrapped_calls_ary[297] = &wrapper_297;
    wrapped_calls_ary[298] = &wrapper_298;
    wrapped_calls_ary[299] = &wrapper_299;
    wrapped_calls_ary[300] = &wrapper_300;
    wrapped_calls_ary[301] = &wrapper_301;
    wrapped_calls_ary[302] = &wrapper_302;
    wrapped_calls_ary[303] = &wrapper_303;
    wrapped_calls_ary[304] = &wrapper_304;
    wrapped_calls_ary[305] = &wrapper_305;
    wrapped_calls_ary[306] = &wrapper_306;
    wrapped_calls_ary[307] = &wrapper_307;
    wrapped_calls_ary[308] = &wrapper_308;
    wrapped_calls_ary[309] = &wrapper_309;
    wrapped_calls_ary[310] = &wrapper_310;
    wrapped_calls_ary[311] = &wrapper_311;
    wrapped_calls_ary[312] = &wrapper_312;
    wrapped_calls_ary[313] = &wrapper_313;
    wrapped_calls_ary[314] = &wrapper_314;
    wrapped_calls_ary[315] = &wrapper_315;
    wrapped_calls_ary[316] = &wrapper_316;
    wrapped_calls_ary[317] = &wrapper_317;
    wrapped_calls_ary[318] = &wrapper_318;
    wrapped_calls_ary[319] = &wrapper_319;
    wrapped_calls_ary[320] = &wrapper_320;
    wrapped_calls_ary[321] = &wrapper_321;
    wrapped_calls_ary[322] = &wrapper_322;
}