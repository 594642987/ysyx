#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"
#include <assert.h>
#include <string.h>

extern char _heap_start,_heap_end,_rodata_end,_bss_end,_text_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE 0x0fffffff
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, &_heap_end);
#ifndef MAINARGS
#define MAINARGS "test"
#endif
static const char mainargs[] = MAINARGS;


extern char _ssbl_origin,_ssbl_ram_start,_ssbl_ram_end;
extern char _test_origin,_text_ram_start,_data_ram_end;
extern char _bss_start,_bss_end;
uint32_t number;

void putch(char ch) {
  //这里要加东西
  while((inb(SERIAL_PORT+5)&0x20) == 0){
    
  }
  outb(SERIAL_PORT, ch);
}
void print_char(uint32_t){
  putch((number&0xff000000) >> 24);
  putch((number&0x00ff0000) >> 16);
  putch((number&0x0000ff00) >> 8);
  putch((number&0x000000ff) >> 0);
}

void halt(int code) {
  // printf("finished\n");
  // from #include <nemu.h>
  asm volatile("mv a0, %0; ebreak" : :"r"(code));

  while (1);
}
void uart_init(){
  outb(SERIAL_PORT+3,0x80); //设置LCR i 7th DLAB 为1
  outb(SERIAL_PORT  ,0x01);
  outb(SERIAL_PORT+1,0x00);
  outb(SERIAL_PORT+3,0x03); // 重新设置LCR
}
#pragma GCC push_options
#pragma GCC optimize("O0")
void read_csr(){
  asm volatile("csrr %0, %1" : "=r"(number) : "i"(0xF11));
  // print_char(number);
  asm volatile("csrr %0, %1" : "=r"(number) : "i"(0xF12));
  // printf("%d\n",number);
}
void ssbl();
void device_init();
void fsbl(){
  // boot_memcpy((uint32_t)&_ssbl_origin,(uint32_t)&_ssbl_ram_start,(uint32_t)&_ssbl_ram_end);
  volatile uint32_t *src = (volatile uint32_t *)&_ssbl_origin;
  volatile uint32_t *dst = (volatile uint32_t *)&_ssbl_ram_start;
  while((uint32_t) dst < (uint32_t) &_ssbl_ram_end){
    *dst++ = *src++;
  }
  ssbl();
}
void ssbl(){
  // copy text rodata data 
  volatile uint32_t *src = (volatile uint32_t *)&_test_origin;
  volatile uint32_t *dst = (volatile uint32_t *)&_text_ram_start;
  while((uint32_t) dst < (uint32_t) &_data_ram_end){
    *dst++ = *src++;
  }
  // init_bss
  src = (volatile uint32_t *)&_bss_start;
  while((uint32_t) src < (uint32_t) &_bss_end){
    *src++ = 0;
  }
  device_init();
}

void device_init(){
  uart_init();
  putch('f');
  putch('\n');
  // read_csr();
  int ret = main(mainargs);
  halt(ret);
}
void _trm_init() {
  fsbl();
}