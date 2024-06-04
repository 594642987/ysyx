#include "device.h"
#include <sys/time.h>

static uint64_t boot_time = 0;
static uint64_t now_time = 0;

static uint64_t get_time_internal() {
    struct timeval now;
    gettimeofday(&now, NULL);
    uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
    return us;
}

static uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}

void timer_init(){
    get_time();
}

uint32_t timer_read(uint32_t addr){
    if(addr == RTC_ADDR){
        now_time = get_time();
        return (uint32_t)now_time;
    }else if(addr == RTC_ADDR+4){
        return (uint32_t)(now_time >> 32);
    }
    return 0;
}