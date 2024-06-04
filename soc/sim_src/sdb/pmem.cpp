#include "pmem.h"

#define PG_ALIGN __attribute((aligned(4096)))

uint8_t pmem[PMEM_SIZE] PG_ALIGN = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - PMEM_LEFT; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + PMEM_LEFT; }

word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    // IFDEF(CONFIG_ISA64, case 8: return *(uint64_t *)addr);
    default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
  }
}

void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    // IFDEF(CONFIG_ISA64, case 8: *(uint64_t *)addr = data; return);
    IFDEF(CONFIG_RT_CHECK, default: assert(0));
    // default: assert(0);
  }
}

uint32_t pmem_read(uint32_t addr, int len){
    uint32_t ret = host_read(guest_to_host(addr), len);
    // printf("read addr:%x data:%x\n",addr,ret);
    return ret;
}

void pmem_write(uint32_t addr, uint32_t data, int len){
    host_write(guest_to_host(addr), len, data);
  // printf("write address:%08x data:%08x\n",addr,data);
}
extern uint32_t cpu_pc;

static void out_of_bound(paddr_t addr) {
  // panic("address =  0x%8x  is out of bound of pmem [ 0x%8x , 0x%8x ] at pc =  0x%8x",
  //     addr, PMEM_LEFT, PMEM_RIGHT, cpu_pc);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  // IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  // IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
