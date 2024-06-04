#include <am.h>
#include "ysyxsoc.h"

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t ev = inl(KBD_ADDR);
  kbd->keydown = (ev & KEYDOWN_MASK) != 0;
  kbd->keycode = ev & (~KEYDOWN_MASK);
}
