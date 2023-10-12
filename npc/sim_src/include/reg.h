#ifndef __REG_H__
#define __REG_H__

#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "config.h"
#include "Vriscv32__Dpi.h"

//reg
void isa_reg_display();
CPU_state package_cpu(uint32_t *gpr, uint32_t pc);
bool isa_difftest_checkregs(CPU_state *ref);

#endif