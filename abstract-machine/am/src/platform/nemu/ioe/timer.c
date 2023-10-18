#include <am.h>
#include <nemu.h>
#include <stdio.h>

static uint64_t boot_time = 0;

static uint64_t read_time(){
  uint32_t a = (uint64_t)inl(RTC_ADDR);
  uint32_t b = inl(RTC_ADDR) | (uint64_t)inl(RTC_ADDR+4)<<32;

  printf("%d %d\n",a,b);

  printf("%ld\n",(uint64_t)inl(RTC_ADDR)+ ((uint64_t)inl(RTC_ADDR+4))<<32);
  printf("%d\n",inl(RTC_ADDR) | (uint64_t)inl(RTC_ADDR+4)<<32);
  return ((uint64_t)inl(RTC_ADDR) + ((uint64_t)inl(RTC_ADDR+4)<<32));
}

void __am_timer_init() {
  boot_time = read_time();
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = read_time() - boot_time;
  printf("read:%ld\n",read_time());
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}


// static uint64_t read_time(){
//   uint32_t low = inl(RTC_ADDR);
//   uint32_t high = inl(RTC_ADDR+4);
//   return ((uint64_t)high<<32) | (uint64_t)low;
// }