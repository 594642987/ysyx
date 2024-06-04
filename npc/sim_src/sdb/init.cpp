#include "init.h"

#include "difftest.h"
#include "sdb.h"
#include "trace.h"

#include "device_lib.h"
#include "pmem.h"

#include <getopt.h>

static char *img_file = NULL;
static char *diff_so_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;

VerilatedContext* contextp = NULL;
Vysyx_23060077_top* top = NULL;
VerilatedVcdC* tfp = NULL;

extern uint8_t pmem [PMEM_SIZE];

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
    top = new Vysyx_23060077_top(contextp);

    tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("wave.vcd");

}

void finish_sim(){
  	delete top;
	  tfp->close();
	  delete contextp;
}



void init_npc(int argc, char *argv[]) {
    parse_args(argc, argv);

    init_mem();

    long img_size = load_img();

    init_difftest(diff_so_file, img_size, difftest_port);

	  init_sdb();

#ifdef CONFIG_ITRACE
    init_disasm("riscv32");
#endif

#ifdef CONFIG_FTRACE
  init_ftrace(elf_file);
#endif

    device_init();
    
}