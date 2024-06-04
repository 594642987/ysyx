#include "init.h"

#include "difftest.h"
#include "sdb.h"
#include "trace.h"

#include "device_lib.h"
#include <nvboard.h>
#include <getopt.h>
#include <stdio.h>

static char *img_file = NULL;
static char *diff_so_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;

VerilatedContext* contextp = NULL;
TOP_NAME* top = NULL;
VerilatedVcdC* tfp = NULL;

extern uint8_t pmem [PMEM_SIZE];

extern uint8_t flash_mem [FLASH_SIZE];
extern uint8_t psram_mem [PSRAM_SIZE];

void nvboard_bind_all_pins(TOP_NAME* top);

static long load_img() {
  Assert(img_file != NULL, "No img file!");
  
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open img_file '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  assert(ret == 1);

  fseek(fp, 0, SEEK_SET);
  ret = fread(flash_mem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"img"      , required_argument, NULL, 'i'},
    {"diff"     , required_argument, NULL, 'd'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-b:i:d:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode();break;
      case 'd': diff_so_file = optarg; break;
      case 'i': img_file = optarg; break;
      case 'e': elf_file = optarg; break;
      // case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_sim(){
    contextp = new VerilatedContext;
    // contextp->commandArgs(argc, argv);
    top = new TOP_NAME(contextp);

    tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("wave.vcd");

}
void init_flash(){
  uint32_t *mem32 = (uint32_t *)flash_mem;
  mem32[0] = 0x100007b7;
  mem32[1] = 0x04100713;
  mem32[2] = 0x00e78023;
  mem32[3] = 0x00000513;
  mem32[4] = 0x00100073;
}

void finish_sim(){
  	delete top;
	  tfp->close();
	  delete contextp;
}
void init_mem() {

  int i;
  uint32_t *s = (uint32_t *)psram_mem;
  for (i = 0; i < (int) (PSRAM_SIZE / sizeof(s[0])); i ++) {
    s[i] = 0;
  }
  uint32_t *q = (uint32_t *)flash_mem;
  for (i = 0; i < (int) (FLASH_SIZE / sizeof(q[0])); i ++) {
    q[i] = 0;
  }
}

void init_npc(int argc, char *argv[]) {
    parse_args(argc, argv);
    // init_mem();

    long img_size = load_img();

    init_difftest(diff_so_file, img_size, difftest_port);

	  init_sdb();
    
#ifdef CONFIG_NVBOARD
    nvboard_bind_all_pins(top);
    nvboard_init();
#endif
  
#ifdef CONFIG_ITRACE
    init_disasm("riscv32");
#endif

#ifdef CONFIG_FTRACE
  init_ftrace(elf_file);
#endif

    device_init();
    
}