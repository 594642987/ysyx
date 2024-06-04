#include <am.h>
#include "ysyxsoc.h"

static uint64_t boot_time = 0;

static uint64_t read_time(){
  return ((uint64_t)inl(CLINT_PORT) | ((uint64_t)inl(CLINT_PORT+4)<<32));
  // return 0;
}

void __am_timer_init() {
  boot_time = read_time();
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = read_time() - boot_time;
  // printf("read:%ld\n",read_time());
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 1;
  rtc->minute = 1;
  rtc->hour   = 1;
  rtc->day    = 1;
  rtc->month  = 1;
  rtc->year   = 2024;
}
