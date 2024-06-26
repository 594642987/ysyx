

#include "common.h"

#include "pmem.h"
#include "device_lib.h"

#include "Vriscv32__Dpi.h"
#include "verilated_dpi.h"


bool riscv32_rst = false;
int stop_flag = 0;
// 有外设读取的情况
uint32_t device_flag = 0;

uint32_t cpu_pc;
uint32_t *cpu_gpr = NULL;
uint32_t *cpu_csr = NULL;

extern Vriscv32* top;


extern "C" void set_pc_ptr(int pc) {
  cpu_pc = (uint32_t) pc;
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
  cpu_csr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void get_riscv32_rst(svBit rst_n) {
  if(rst_n){
	riscv32_rst = true;
  }else{
	riscv32_rst = false;
  }
}

extern "C" void riscv_pmem_read(int raddr, int *rdata, svBit ren){
	if(ren){
		if(in_pmem(raddr)){
			// printf("%8x\n",raddr);
			*rdata = pmem_read((uint32_t)raddr,4);
			if(*rdata == 0x00100073){
				stop_flag = 1;
			}
			// if(raddr == 0x80001200){ //gpr 13
			// 	stop_flag = 1;
			// }
		}else{
			device_flag = 1;
			// printf("%8x\n",raddr);
			*rdata = device_read((uint32_t) raddr);
		}

#ifdef CONFIG_MTRACE
	if(top->clk == 0){
		if(raddr >= CONFIG_MTRACE_START_ADDR && raddr <= CONFIG_MTRACE_END_ADDR){
			printf("read address:%08x data:%08x\n",raddr,*rdata);
		}
	}
#endif
	}
}

extern "C" void riscv_pmem_write(int waddr, int wdata, int wmask,svBit wen){
	if(wen){
		// printf("%8x\n",waddr);
		if(in_pmem(waddr)){
			pmem_write((uint32_t)waddr,(uint32_t)wdata,wmask);
		}else{
			device_write((uint32_t) waddr, (uint32_t) wdata);
		}
	}
#ifdef CONFIG_MTRACE
	if(top->clk == 0){
		if(waddr >= CONFIG_MTRACE_START_ADDR && waddr <= CONFIG_MTRACE_END_ADDR){
			printf("write address:%08x data:%08x\n",waddr,wdata);
		}
	}
#endif
	
}

