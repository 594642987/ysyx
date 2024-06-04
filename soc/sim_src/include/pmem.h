#ifndef __PMEM_H__
#define __PMEM_H__


#include "common.h"


//pmem
uint8_t* guest_to_host(paddr_t paddr);
uint32_t pmem_read(uint32_t addr, int len);
void pmem_write(uint32_t addr, uint32_t data, int len);

static inline bool in_pmem(paddr_t addr) {
  return (addr >= PMEM_LEFT) && (addr <= PMEM_LEFT+PMEM_SIZE);
}

word_t host_read(void *addr, int len);
void host_write(void *addr, int len, word_t data);

word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

#endif





