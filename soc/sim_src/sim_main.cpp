
#include "cpu.h"
#include "init.h"
#include "sdb.h"

#include "riscv_lib.h"


int main(int argc, char *argv[]){
	init_sim();

	reset();

	init_npc(argc,argv);

	
	sdb_mainloop();

	finish_sim();
	return is_exit_status_bad();
}
