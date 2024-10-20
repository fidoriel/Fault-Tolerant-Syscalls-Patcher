#ifndef CR0_PATCH_H
#define CR0_PATCH_H

#include <linux/init.h>
#include <linux/kallsyms.h>
#include <linux/mm.h>
#include <linux/mman.h>
#include <linux/module.h>
#include <linux/syscalls.h>

// https://jm33.me/we-can-no-longer-easily-disable-cr0-wp-write-protection.html

static inline void write_cr0_forced(unsigned long val) {
  unsigned long __force_order;

  /* __asm__ __volatile__( */
  asm volatile("mov %0, %%cr0" : "+r"(val), "+m"(__force_order));
}

static inline void protect_memory(void) {
  write_cr0_forced(read_cr0() | 0x10000);
}

static inline void unprotect_memory(void) {
  write_cr0_forced(read_cr0() & (~0x10000));
}

#endif
