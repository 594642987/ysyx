#ifndef NPC_H__
#define NPC_H__

#include "riscv/riscv.h"
#include <stdio.h>

#define DEVICE_BASE 0x10000000
#define MMIO_BASE 0xE0000000

#define SERIAL_PORT         0x10000000
#define CLINT_PORT          0x02000000

#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

#endif