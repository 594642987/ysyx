#ifndef __ITRACE_H__
#define __ITRACE_H__

#include <inttypes.h>


//disasm
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

//ftrace
void init_ftrace(const char *elf_file);
void ftrace_print(uint32_t pc, uint32_t npc,uint32_t inst);

#endif

