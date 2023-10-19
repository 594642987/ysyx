#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t ev = inl(KBD_ADDR);
  kbd->keydown = (ev & KEYDOWN_MASK) != 0;
  kbd->keycode = ev & (~KEYDOWN_MASK);
  printf("%d %d\n",kbd->keydown,kbd->keycode);
}
