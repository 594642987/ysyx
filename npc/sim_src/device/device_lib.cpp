#include "include/device_lib.h"
#include "include/device.h"
#include <SDL2/SDL.h>

#include "include/map.h"
#include "config.h"

void device_init(){
    init_map();

    timer_init();
    // keyboard_init();
    // IFDEF(CONFIG_VGA, init_vga());
#ifdef CONFIG_VGA
    init_vga();
#endif
}

extern Vysyx_23060077* top;
//@Attention device_read和device_write会触发三次，这个问题还没有解决，这里通过一些特殊手段暂时度过
uint32_t device_read(uint32_t addr){
    if(addr == RTC_ADDR || addr == RTC_ADDR + 4){
        return timer_read(addr);
    }else if(addr == KBD_ADDR){    
        return keyboard_read();
    }else if(addr == VGACTL_ADDR){
        return mmio_read(addr,4);
    }else{
        // Assert(0,"no device addr %8x",addr);
    }
    return 0;
}
void device_write(uint32_t addr, uint32_t data){
    // printf("%8x addr",addr);
    // if(top->clock == 0){
        // printf("%8x addr",addr);
        if(addr == SYNC_ADDR){
            vga_update_screen(data);
        }else if(addr >= FB_ADDR && addr < AUDIO_SBUF_ADDR){
            mmio_write(addr,4,data);
            // printf("mmio addr %x data %x\n",addr,data);
        }
        // else if(addr == SERIAL_PORT){
        //     uart_write(data);
        //     //  printf("%8x add\n");
        // }
        else if(addr != 0){
            // Assert(0,"no device addr %8x",addr);
        }
    // }
}