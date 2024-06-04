#ifndef __REG_H__
#define __REG_H__


#include "common.h"

//reg
void isa_reg_display();
void package_cpu(uint32_t pc);
bool isa_difftest_checkregs(CPU_state *ref);
word_t isa_reg_str2val(const char *s, bool *success);

#endif