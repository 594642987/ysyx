#include <trap.h>

int main(){
    // uint8_t *mem8 = (uint8_t *)0x30000000;
    // for(int i=0; i<16; i++){
    //     check(mem8[i] == i);
    // }
    // uint16_t *mem16 = (uint16_t *)0x30000000;
    // for(int i=8; i<16; i++){
    //     check(mem16[i] == i);
    // }
    // uint32_t *mem32 = (uint32_t *)0x30000000;
    // for(int i=8; i<16; i++){
    //     check(mem32[i] == i);
    // }
    uint32_t *mem32 = (uint32_t *)0x30000000;
    check(mem32[0] == 0x100007b7);
    check(mem32[1] == 0x04100713);
    check(mem32[2] == 0x00e78023);
    check(mem32[3] == 0x00000513);
    check(mem32[4] == 0x00100073);
}