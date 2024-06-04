#include <trap.h>

static inline uint8_t  inb(uintptr_t addr) { return *(volatile uint8_t  *)addr; }
static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }

uint32_t lights = 0x00000001;
void delay(uint32_t times){
    for(int j=0; j<times; j++){
        inl(0x30000000);
    }
}

void led_shift(){
    outl(0x10002000,lights);
    lights <<=1;
    if((lights&0x0000FFFF) == 0){
        lights = 0x00000001;
    }
}
void seg_show_id(){
    uint32_t number;
    asm volatile("csrr %0, %1" : "=r"(number) : "i"(0xF12));
    outl(0x10002008,number);
    printf("%08x\n",number);
}


int main(){
    uint32_t password = 0x11;
    seg_show_id();
    while(1){
        uint32_t temp = inl(0x10002004);
        if((temp&0x0000FFFF)== password){
            led_shift();
        }
        delay(50);
    }
}