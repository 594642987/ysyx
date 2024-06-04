#include <trap.h>

static inline uint8_t  inb(uintptr_t addr) { return *(volatile uint8_t  *)addr; }
static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }

#define SIZE 4*1024*1024
int main(){


    uint32_t temp = inl(0x02000000);
    uint32_t temp1 = inl(0x02000004);
    printf("%8x %8x\n",temp1,temp);
    temp1 = inl(0x02000004);
    printf("%8x %8x\n",temp1,temp);
    temp = inl(0x02000000);
    temp1 = inl(0x02000004);
    printf("%8x %8x\n",temp1,temp);
    // uint32_t data = inl(0x80000000);
    // printf("%x\n",data);
    // outw(0x80000001,0xFFF4);
    // data = inl(0x80000000);
    // printf("%x\n",data);
    // temp = inw(0x80000001);
    // printf("%x\n",temp);
  
}