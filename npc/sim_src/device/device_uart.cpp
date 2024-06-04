#include "device.h"


void uart_write(uint32_t data){
    putchar((char)data);
    fflush(stdout);
}