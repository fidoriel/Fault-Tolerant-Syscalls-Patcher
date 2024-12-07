FILE_NAME = "sys_call_wrapper_gen.c"

FILE_CONTENT = """
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
"""
NUM_SYSCALLS = 322
SYSCALL_RANGES = (
    list(range(0, 322))
    # + list(range(424, 462 + 1))
    # + list(range(512, NUM_SYSCALLS + 1))
)


for i in SYSCALL_RANGES:
    FILE_CONTENT += f"""
asmlinkage long wrapper_{i}(struct pt_regs *params)
{{
    // pr_info("[sys_call_patcher] Calling {i}\\n");
    return syscall_wrapper({i}, params);
}}
"""


# Update function generation to use pointer
FILE_CONTENT += "\nvoid fill_wrapped_table(syscall_fn_t *wrapped_calls_ary)\n{\n"

for i in range(NUM_SYSCALLS + 1):
    if i in SYSCALL_RANGES:
        FILE_CONTENT += f"    wrapped_calls_ary[{i}] = &wrapper_{i};\n"  # Array syntax still works with pointers
    else:
        FILE_CONTENT += f"    wrapped_calls_ary[{i}] = NULL;\n"

FILE_CONTENT += "}"

with open(FILE_NAME, "w") as f:
    f.writelines(FILE_CONTENT)
