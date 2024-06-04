#include <trap.h>

int main(){
    uint32_t *mem = heap.start;
    // uint32_t mem[64];
    unsigned i = 0;
    uint8_t *temp8 = (uint8_t *)mem;
    for(i = 0; i< 16; i++){
        temp8[i] = i;
    }
    for(i = 0; i< 16; i++){
        check(temp8[i] == i);
    }
    uint16_t *temp16 = (uint16_t *)mem;
    for(i = 0; i< 16; i+=2){
        temp16[i/2] = i;
    }
    for(i = 0; i< 16; i+=2){
        check(temp16[i/2] == i);
    }
    uint32_t *temp32 = (uint32_t *)mem;
    for(i = 0; i< 16; i+=4){
        temp32[i/4] = i;
    }
    for(i = 0; i< 16; i+=4){
        check(temp32[i/4] == i);
    }
}