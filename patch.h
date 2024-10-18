#ifndef PATCH_H
#define PATCH_H

// https://github.com/xcellerator/linux_kernel_hacking/issues/3

typedef unsigned long (*kln_p)(const char*);
kln_p get_kln_p(void);

#endif
