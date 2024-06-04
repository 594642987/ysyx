#ifndef DEVIDE_LIB_H__
#define DEVIDE_LIB_H__

#include "common.h"



void device_init();
// void device_update();

uint32_t device_read(uint32_t addr);

void device_write(uint32_t addr, uint32_t data);

bool in_device(uint32_t addr);
//uart
void uart_write(uint32_t data);
#endif