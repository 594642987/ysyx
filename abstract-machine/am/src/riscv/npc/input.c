#include <am.h>
<<<<<<< HEAD

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = 0;
  kbd->keycode = AM_KEY_NONE;
=======
#include "npc.h"

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t ev = inl(KBD_ADDR);
  kbd->keydown = (ev & KEYDOWN_MASK) != 0;
  kbd->keycode = ev & (~KEYDOWN_MASK);
>>>>>>> 77ce75f
}
