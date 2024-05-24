/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif
#define SRAM_LEFT			0x0F000000
#define SRAM_RIGHT		0x0FFFFFFF
#define SRAM_MBASE		0x08000000
#define MROM_LEFT			0x20000000
#define MROM_RIGHT 		0x20000FFF
#define MROM_MBASE		0x1F000000
// SRAM 0x0F000000~0x0FFFFFFF  ---->  pmem 0x07000000~0x07FFFFFF
// MROM 0x20000000~0x20000FFF  ---->  pmem 0x01000000~0x01000FFF

uint8_t* guest_to_host(paddr_t paddr){
	if(SRAM_LEFT <= paddr && paddr <= SRAM_RIGHT){
		return pmem + paddr - SRAM_MBASE;	
	}else if(MROM_LEFT <= paddr && paddr <= MROM_RIGHT){
		return pmem + paddr - MROM_MBASE;
	}else{
		panic("address = " FMT_PADDR " is out of bound", paddr);
		return pmem + paddr - CONFIG_MBASE; 
	}
}
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  #ifdef CONFIG_MTRACE
  if(addr >= CONFIG_MTRACE_START_ADDR && addr <= CONFIG_MTRACE_END_ADDR){
    printf("read address:%08x data:%08x\n",addr,ret);
  } 
#endif
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
  // #ifdef CONFIG_MTRACE
//   if(addr >= CONFIG_MTRACE_START_ADDR && addr <= CONFIG_MTRACE_END_ADDR){
//     printf("write address:%08x data:%08x\n",addr,data);
//   } 
// #endif
}

static void out_of_bound(paddr_t addr) {
  // panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
  //     addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
