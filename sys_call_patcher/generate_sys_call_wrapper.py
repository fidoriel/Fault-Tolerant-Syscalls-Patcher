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

NUM_SYSCALLS = 547

for i in range(547):
    FILE_CONTENT += f"""
asmlinkage long wrapper_{i}(struct pt_regs *params)
{{
    int number = {i};
    // pr_info("[sys_call_patcher] Calling %d.\\n", number);
    return syscall_wrapper(number, params);
}}
"""


FILE_CONTENT += '\nvoid fill_wrapped_table()\n{\n'

for i in range(547):
    FILE_CONTENT += f'    wrapped_calls[{i}] = &wrapper_{i};\n'

FILE_CONTENT += '}'

with open(FILE_NAME, "w") as f:
    f.writelines(FILE_CONTENT)

