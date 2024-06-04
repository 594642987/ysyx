

#include "common.h"
#include <assert.h>
#include "pmem.h"
#include "device_lib.h"
#include "difftest.h"
// #include "VysyxSoCFull__Dpi.h"
#include "verilated_dpi.h"


bool riscv32_rst = false;
int stop_flag = 0;
// 有外设读取的情况
uint32_t device_flag = 0;

uint32_t cpu_pc;
uint32_t cpu_inst;
uint32_t *cpu_gpr = NULL;
uint32_t *cpu_csr = NULL;

extern NPCState npc_state;
extern TOP_NAME* top;

#define PG_ALIGN __attribute((aligned(4096)))

uint8_t flash_mem[FLASH_SIZE] PG_ALIGN = {};
uint8_t psram_mem[PSRAM_SIZE] PG_ALIGN = {};
// 只检测读的数据，写的数据比较麻烦
extern "C" void sdram_check(uint32_t addr, uint32_t data,uint32_t len) {
	#ifdef CONFIG_DIFFTEST
	if(addr >= 0xa0000000 && addr <= 0xb0000000){
		// printf("addr=%08x,paddr=%08x\n",addr,data);
		uint32_t size = (len == 0) ? 1 : (len == 1) ? 2:4;
		difftest_memcpy_dut(addr, &data,size);
	}
	#endif
	npc_state.state = NPC_ABORT;
	npc_state.halt_pc = cpu_pc;
}

extern "C" void psram_read(uint32_t addr, uint32_t *data) {
	if(addr >= 0 && addr <= PSRAM_SIZE){
		*data = host_read(psram_mem+addr,4);
		// printf("psram read addr=%08x data=%08x\n",addr,*data);
	}else{
		panic("psram address =  0x%8x  is out of bound",addr);
	}
}
extern "C" void psram_write(uint32_t addr, uint32_t data,uint32_t mask) {
	if(addr >= 0 && addr <= PSRAM_SIZE){
		uint32_t wdata = data >> ((8-mask)*4);
		host_write(psram_mem+addr,mask/2,wdata);
		// *(uint32_t *)(psram_mem+addr) = data;
		// printf("psram write addr=%08x data=%08x %08x mask=%d\n",addr,wdata,data,mask/2);
	}else{
		panic("psram address =  0x%8x  is out of bound",addr);
	}
}

extern "C" void flash_read(uint32_t addr, uint32_t *data) {
	if(addr >= 0 && addr <= FLASH_SIZE){
		uint32_t raddr = addr&0xFFFFFFFC;
		*data = *(uint32_t *)(flash_mem+addr);
		// *data = pmem_read((uint32_t)raddr,4);
		// if(*data == 0x0000006f){
		// 	*data = 0x00100073;
		// }
		// printf("flash read addr=%08x data=%08x\n",addr,*data);
	}else{
		panic("flash address =  0x%8x  is out of bound",addr);
	}
}
extern "C" void mrom_read(uint32_t addr, uint32_t *data) {
	if(addr >= 0x20000000 && addr <= 0x20000fff){
		uint32_t raddr = addr&0xFFFFFFFC;
		*data = pmem_read((uint32_t)raddr,4);
		// if(*data == 0x0000006f){
		// 	*data = 0x00100073;
		// }
		// printf("%08x %08x\n",addr,*data);
	}else{
		panic("mrom address =  0x%8x  is out of bound",addr);
	}
}
extern "C" void device_skip(svBit ren,uint32_t raddr, svBit wen,uint32_t waddr) {
	if(ren){
		if(in_device(raddr)){
			device_flag = 1;
		}
	}
}

extern "C" void set_axi_resp(int b_resp,int r_resp){
	if(b_resp){
		npc_state.state = NPC_ABORT;
		printf("axi write errors, err_code: %d!\n",b_resp);
	}
	if(r_resp){
		npc_state.state = NPC_ABORT;
		printf("axi write errors, err_code: %d!\n",r_resp);
	}
}

extern "C" void set_pc_ptr(int pc,int inst,svBit valid){
	if(valid){
		cpu_pc = (uint32_t) pc;
		cpu_inst = (uint32_t) inst;
	}
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
  cpu_csr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void get_riscv32_rst(svBit reset) {
  if(reset){
	riscv32_rst = true;
	// printf("reseting\n");
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
	if(top->clock == 0){
		if(raddr >= CONFIG_MTRACE_START_ADDR && raddr <= CONFIG_MTRACE_END_ADDR){
			printf("read address:%08x data:%08x\n",raddr,*rdata);
		}
	}
#endif
	}else{
		*rdata = 0;
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
	if(top->clock == 0){
		if(waddr >= CONFIG_MTRACE_START_ADDR && waddr <= CONFIG_MTRACE_END_ADDR){
			printf("write address:%08x data:%08x\n",waddr,wdata);
		}
	}
#endif
	
}

extern "C" void riscv_uart_write(int wdata,svBit wen){
	if(wen){
		uart_write(wdata);
	}
}

