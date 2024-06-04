

#include "common.h"

#include "pmem.h"
#include "device_lib.h"

#include "Vysyx_23060077_top__Dpi.h"
#include "verilated_dpi.h"


bool riscv32_rst = false;
int stop_flag = 0;
// 有外设读取的情况
uint32_t device_flag = 0;

uint32_t cpu_pc;
uint32_t *cpu_gpr = NULL;
uint32_t *cpu_csr = NULL;

extern Vysyx_23060077_top* top;


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

extern "C" void riscv_pmem_read(int raddr, int *rdata, int len,svBit ren){
	if(ren){
		if(in_pmem(raddr)){
			// printf("%8x\n",raddr);
			*rdata = pmem_read((uint32_t)raddr,len);
			if(*rdata == 0x00100073){
				stop_flag = 1;
			}
			// if(raddr == 0x80001200){ //gpr 13
			// 	stop_flag = 1;
			// }
		}else{
			// device_flag = 1;
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
uint32_t write_addr = 0;
uint32_t write_data = 0;
uint32_t write_mask = 0;
uint32_t write_flag = 0;
extern "C" void riscv_pmem_write(int waddr, int wdata, int wmask,svBit wen){
	if(wen){
		write_addr = waddr;
		write_data = wdata;
		write_mask = wmask;
		write_flag = 1;
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

