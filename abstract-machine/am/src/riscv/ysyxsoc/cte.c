#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      	case 11:
        	ev.event = EVENT_YIELD;
        	c->mepc +=4;
        	break;
      	default: 
        	ev.event = EVENT_ERROR;
        	printf("event_error: %d\n",c->mcause); 
        	break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
	Context *c = (Context*)((uintptr_t)kstack.end - sizeof(Context));
	// printf("%x %x %x\n",(uintptr_t)kstack.start,(uintptr_t)kstack.end,(uintptr_t)kstack.end-(uintptr_t)kstack.start);
	// printf("%x\n",(uintptr_t)kstack.end - sizeof(Context));
	// printf("%x\n",sizeof(Context));
	memset(c,0,sizeof(Context));

	assert(kstack.end - (void *)c == sizeof(Context));

	c->mepc = (uintptr_t)entry;
	//系统调用参数从a0-a7寄存器中传递,gpr[10]是a0寄存器
	c->gpr[10] = (uintptr_t)arg;
	//配合difftest
	c->mstatus = 0x1800;

	return c;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
