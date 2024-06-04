#include <trap.h>

static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }


int main(){
    uint32_t address = 0x10001000;
    // SPI_DIVIDER_BIT_NB  16
    // SPI_MAX_CHAR 16
    // SPI_SS_NB 

    // DIVIDER
    outl(address + 0x14, 0x0000000F);
    //ctrl  设置lsb tx下降输出， rx上升采样 传输16位，设置lsb才能将低位优先传出去
    outl(address + 0x10, 0x00000C10);
    //SS
    outl(address + 0x18, 0x00000080);
    //传1F
    outl(address + 0, 0x0000001F);
    //ctrl  GO_BSY设置成1开始传输
    outl(address + 0x10, 0x00000D10);

    uint32_t data;
    data = inl(address + 0x10);
    // 检测go_bsy是否为1，判断是否传输完成
    while(data == 0x00000D10){
        data = inl(address + 0x10);
    }
    // 拉高ss使能信号
    outl(address + 0x18, 0x00000000);

    data = inl(address + 0);
    check((data&0x0000FF00) == 0x00001F00);
}