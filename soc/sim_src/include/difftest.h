#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__


#include "common.h"


//difftest
void difftest_skip_ref();
void init_difftest(char *ref_so_file, long img_size, int port);
bool checkregs();
void difftest_step(vaddr_t pc, vaddr_t npc);


void difftest_memcpy_dut(paddr_t addr, void *buf, size_t n);
#endif