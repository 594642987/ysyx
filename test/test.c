#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t data =  *(uint32_t *)0x00000004;
    printf("%d\n",data);
}