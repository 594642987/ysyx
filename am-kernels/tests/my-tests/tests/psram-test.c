#include <trap.h>

static inline uint8_t  inb(uintptr_t addr) { return *(volatile uint8_t  *)addr; }
static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }

#define SIZE 4*1024*1024
int main(){

    // uint8_t temp = inb(0x80001115);

    // outl(0x80000000,0x010203F4);
    // uint16_t temp = inw(0x80000001);
    // printf("%x\n",temp);
    // uint32_t data = inl(0x80000000);
    // printf("%x\n",data);
    // outw(0x80000001,0xFFF4);
    // data = inl(0x80000000);
    // printf("%x\n",data);
    // temp = inw(0x80000001);
    // printf("%x\n",temp);
    uint32_t i=0;
    uint8_t data8;    
    for(i=0; i<SIZE; i++){
        outb(0x80000000+i,i%256);
    }
    for(i=0; i<SIZE; i++){
        data8 = inb(0x80000000+i);
        check(data8 == i%256);
    }
    uint16_t data16;
    for(i = 0; i< SIZE; i+=2){
        outw(0x80000000+i,i&0x0000FFFF);
    }
    for(i=0; i<SIZE; i+=2){
        data16 = inw(0x80000000+i);
        check(data16 == (i&0x0000FFFF));
    }
    uint32_t data32;
    for(i = 0; i< SIZE; i+=4){
        outl(0x80000000+i,i);
    }
    for(i=0; i<SIZE; i+=4){
        data32 = inl(0x80000000+i);
        check(data32 == i);
    }
}