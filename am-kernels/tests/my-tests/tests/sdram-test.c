#include <trap.h>

static inline uint8_t  inb(uintptr_t addr) { return *(volatile uint8_t  *)addr; }
static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }

#define SIZE 1024*1024
int main(){

    // outl(0xa6000000,0x010203F4);
    // outl(0xa0000000,0x0F0E0EF4);
    // uint16_t temp = inw(0xa6000000);
    // printf("%08x\n",temp);
    // uint32_t data = inl(0xa0000000);
    // printf("%08x\n",data);
    // data = inl(0xa6000000);
    // printf("%08x\n",data);


    // outw(0xa0010000,0xFFF4);
    // data = inl(0xa0010000);
    // printf("%x\n",data);
    // temp = inw(0xa0010000);
    // printf("%x\n",temp);
    
    // outl(0xa0000004,0x0F0E0EF4);
    // temp = inw(0xa0000004);
    // printf("%08x\n",temp);
    // data = inl(0xa0000004);
    // printf("%08x\n",data);
    uint32_t i=0;
    // uint8_t data8;    
    // for(i=0; i<SIZE; i++){
    //     outb(0xa0000000+i,i&0x000000FF);
    //     outb(0xa4000000+i,(0xFFFFFFFF-i)&0x000000FF);
    // }
    // for(i=0; i<SIZE; i++){
    //     data8 = inb(0xa0000000+i);
    //     check(data8 == (i&0x000000FF));
    //     data8 = inb(0xa4000000+i);
    //     check(data8 == ((0xFFFFFFFF-i)&0x000000FF));
    // }
//     uint16_t data16;
//     for(i = 0; i< SIZE; i+=2){
//         outw(0xa0000000+i,i&0x0000FFFF);
//     }
    uint32_t data32;
    for(i = 0; i< SIZE; i+=4){
        outl(0xa0000000+i,i<<8);
        outl(0xa4000000+i,(0xFFFFFFFF-i));
    }
    for(i=0; i<SIZE; i+=4){
        data32 = inl(0xa0000000+i);
        if(data32 != (i<<8) ){
            printf("addr:%8x,rdata:%8x,data:%8x\n",0xa0000000+i,data32,(i<<8));
        }
        check(data32 == (i<<8));
        
    }
    for(i=0; i<SIZE; i+=4){
        data32 = inl(0xa4000000+i);
        if(data32 != (0xFFFFFFFF-i)){
            printf("addr:%8x,rdata:%8x,data:%8x\n",0xa4000000+i,data32,(0xFFFFFFFF-i));
        }
        check(data32 == (0xFFFFFFFF-i));
    }
}