#include <am.h>
#include <klib-macros.h>
<<<<<<< HEAD
=======
#include "npc.h"
#include <assert.h>
>>>>>>> 77ce75f

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
<<<<<<< HEAD
}

void halt(int code) {
=======
  //这里要加东西
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  // printf("finished\n");
  // from #include <nemu.h>
  asm volatile("mv a0, %0; ebreak" : :"r"(code)); 

>>>>>>> 77ce75f
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
