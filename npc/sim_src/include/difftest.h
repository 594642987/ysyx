#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__

#include <dlfcn.h>


#include "common.h"


#include "pmem.h"
#include "reg.h"

//difftest
void init_difftest(char *ref_so_file, long img_size, int port);
bool checkregs();
void difftest_step();



#endif