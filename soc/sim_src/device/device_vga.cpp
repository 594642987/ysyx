#include "device.h"

#define SCREEN_W 400
#define SCREEN_H 300


static uint32_t screen_width() {
  return SCREEN_W;
}

static uint32_t screen_height() {
  return SCREEN_H;
}

static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

#include <SDL2/SDL.h>
static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static uint32_t *vgactl_port_base=NULL;
static uint32_t *vmem = NULL;

static void init_screen(){
    SDL_Window *window = NULL;
    char title[128];
    sprintf(title, "riscv32e-npc");
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(
        SCREEN_W ,
        SCREEN_H ,
        0, &window, &renderer);
    SDL_SetWindowTitle(window, title);
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);

    if(!texture){
      printf("SDL_CreateTexture failed!\n");
      assert(0);
    }

}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen(uint32_t data) {
  // if(vgactl_port_base[1]){
    update_screen();
  // }
}
// void write_screen(uint32_t addr, uint32_t data){
//   Assert(addr - FB_ADDR < screen_size(),"screen_addr is overflowed!");
//   // 除以4 从8位数据地址转换成32位数据的数组下标
//   uint32_t offset = (addr - FB_ADDR) >> 2;
//   vmem[offset] = data;
// }

void init_vga(){
    vgactl_port_base = (uint32_t *)new_space(8);
    vgactl_port_base[0] = (screen_width() << 16) | screen_height();

    add_mmio_map("vgactl", VGACTL_ADDR, vgactl_port_base, 8, NULL);
    // printf("%x\n",screen_size());
    vmem = (uint32_t *)new_space(screen_size());
    add_mmio_map("vmem", FB_ADDR, vmem, screen_size(), NULL);

    init_screen();
    memset(vmem,0xf8,screen_size());
    update_screen();
}
