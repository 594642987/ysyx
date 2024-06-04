#include <trap.h>

static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }

#define FLASH_ADDR 0x10001000
#define FLASH_TX0  FLASH_ADDR + 0x00
#define FLASH_TX1  FLASH_ADDR + 0x04
#define FLASH_RX0  FLASH_ADDR + 0x00
#define FLASH_CTRL FLASH_ADDR + 0x10
#define FLASH_DIV  FLASH_ADDR + 0x14
#define FLASH_SS   FLASH_ADDR + 0x18
// msb tx下降更新 rx上升采样 传输64位，写32位地址，读32位数据
#define CTRL_CONFIG 0x00001040
#define GO_BSY      (1 << 8)
#define CHANNEL_0   (1 << 0)

uint32_t swap_bytes(uint32_t value){
    return ((value >> 24) & 0x000000FF) | 
        ((value >> 8)  & 0x0000FF00) |
        ((value << 8)  & 0x00FF0000) |
        ((value << 24) & 0xFF000000);
}

void flash_init(){
    // outl(FLASH_DIV, 0x0000000F);
    // outl(FLASH_CTRL, CTRL_CONFIG);
}

uint32_t flash_read(uint32_t addr){
    

    //传命令+地址
    outl(FLASH_TX1, 0x03000000 | (addr & 0x00FFFFFF));
    outl(FLASH_TX0, 0x00000000);

    //ss 使能通道0
    outl(FLASH_SS, 0 | CHANNEL_0);
    //ctrl  GO_BSY设置成1开始传输
    outl(FLASH_CTRL, CTRL_CONFIG | GO_BSY);
    
    while((inl(FLASH_CTRL) & GO_BSY) != 0){

    }

    outl(FLASH_SS, 0 );
    return swap_bytes(inl(FLASH_RX0));
}


int main(){
    flash_init();
    check(flash_read(0) == 0x00000413);
    // for(uint32_t i=0; i<5; i+=1){
    //     outl(0x0f000000+i*4,flash_read(i*4));
    // }
    // asm volatile("lui s1,0x0F000;");
    // asm volatile("jalr x0,0(s1);");
}