#include "device.h"

#include <SDL2/SDL.h>

// Note that this is not the standard
#define KEYDOWN_MASK 0x8000
#define _KEYS(f) \
  f(ESCAPE) f(F1) f(F2) f(F3) f(F4) f(F5) f(F6) f(F7) f(F8) f(F9) f(F10) f(F11) f(F12) \
f(GRAVE) f(1) f(2) f(3) f(4) f(5) f(6) f(7) f(8) f(9) f(0) f(MINUS) f(EQUALS) f(BACKSPACE) \
f(TAB) f(Q) f(W) f(E) f(R) f(T) f(Y) f(U) f(I) f(O) f(P) f(LEFTBRACKET) f(RIGHTBRACKET) f(BACKSLASH) \
f(CAPSLOCK) f(A) f(S) f(D) f(F) f(G) f(H) f(J) f(K) f(L) f(SEMICOLON) f(APOSTROPHE) f(RETURN) \
f(LSHIFT) f(Z) f(X) f(C) f(V) f(B) f(N) f(M) f(COMMA) f(PERIOD) f(SLASH) f(RSHIFT) \
f(LCTRL) f(APPLICATION) f(LALT) f(SPACE) f(RALT) f(RCTRL) \
f(UP) f(DOWN) f(LEFT) f(RIGHT) f(INSERT) f(DELETE) f(HOME) f(END) f(PAGEUP) f(PAGEDOWN)

#define _KEY_NAME(k) _KEY_##k,
enum {
  _KEY_NONE = 0,
  MAP(_KEYS, _KEY_NAME)
};
#define SDL_KEYMAP(k) keymap[concat(SDL_SCANCODE_, k)] = concat(_KEY_, k);
static uint32_t keymap[256] = {};


extern NPCState npc_state ;

#define KEY_QUEUE_LEN 1024
static int key_queue[KEY_QUEUE_LEN] = {};
static int key_head = 0, key_tail = 0;

static void init_keymap() {
  MAP(_KEYS, SDL_KEYMAP)
}

static void key_enqueue(uint32_t scancode){
    key_queue[key_tail] = scancode;
    key_tail = (key_tail + 1) % KEY_QUEUE_LEN;
    Assert(key_head != key_tail, "key queue overflow!");
}

static uint32_t key_dequeue(){
    uint32_t key = _KEY_NONE;
    if(key_head != key_tail){
        key = key_queue[key_head];
        key_head = (key_head + 1) % KEY_QUEUE_LEN;
    }
    return key;
}

static void send_key(uint8_t scancode, bool is_keydown){
    if(npc_state.state == NPC_RUNNING && keymap[scancode] != _KEY_NONE){
        uint32_t am_scancode = keymap[scancode] | (is_keydown ? KEYDOWN_MASK : 0);
        key_enqueue(am_scancode);
    }
}
void keyboard_update();

int keyboard_update_adapter(void* data) {
    while(1){
        SDL_Delay(100);
        keyboard_update();
    }
    return 0;  // 返回一个整数值
}

void keyboard_init(){
    init_keymap();
    SDL_CreateThread(keyboard_update_adapter,"keyboard_update",NULL);
}

uint32_t keyboard_read(){
  uint32_t temp = key_dequeue();
  if(temp & KEYDOWN_MASK){
    // printf("%d\n",temp);
    //printf("pop num:%d\n",(key_tail+KEY_QUEUE_LEN-key_head)%KEY_QUEUE_LEN);
  }
  return temp;
}

void keyboard_update(){
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        npc_state.state = NPC_QUIT;
        break;
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);

//@Attention device_read触发三次，这里写三次数据
        send_key(k, is_keydown);
        send_key(k, is_keydown);
        send_key(k, is_keydown);
        //printf("push num:%d\n",(key_tail+KEY_QUEUE_LEN-key_head)%KEY_QUEUE_LEN);
        break;
      }
      default: break;
    }
  }
}