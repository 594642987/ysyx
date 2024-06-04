#include "sdb.h"

#include "cpu.h"

#include <readline/readline.h>
#include <readline/history.h>

static int is_batch_mode = false;

// extern NPCState npc_state ;

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}


static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  return -1;
}

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);
static int cmd_w(char *args);
static int cmd_d(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },

  /* TODO: Add more commands */
  { "si", "Pause the program after run one step N times. N defaults is 1", cmd_si},
  { "info", "r(print reg status), w(print watchpoint info)", cmd_info },
  { "x", "outpu N consecutive uint32_t in hex format", cmd_x },
  { "p", "find the value of expression", cmd_p },
  { "w", "set watchpoint, If changed, program will stop and print all watchpoint info", cmd_w },
  { "d", "delete watchpoint with the number of N", cmd_d },
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}


static int cmd_si(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  if (arg == NULL) {
    /* no argument given */
    cpu_exec(1);
  }
  else {
    int num = atoi(arg);
    cpu_exec(num);
  }
  return 0;
}
static int cmd_info(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    printf("please give argument\n");
  }
  else {
    if(strcmp(arg,"r") == 0){
      isa_reg_display();
    }
    if(strcmp(arg,"w") == 0){
      wp_display();
    }
  }
  return 0;
}
static int cmd_x(char *args) {
  /* extract the first argument */
  char *arg1 = strtok(NULL, " ");
  if (arg1 == NULL) {
    /* no argument given */
    printf("please give number\n");
    return 0;
  }
  int num1 = atoi(arg1);

  char *arg2 = strtok(NULL, " ");
  if (arg2 == NULL) {
    /* no argument given */
    printf("please give address\n");
    return 0;
  }
  bool success = true;
  uint32_t result = expr(arg2,&success);
  if(success == 0){
    return 0;
  }
  paddr_t addr = (paddr_t)result;

  for(int i=0; i<num1; i++){
    printf("0x%x:%08x\n",addr,paddr_read(addr,4));
    addr += 4;
  }


  return 0;
}
static int cmd_p(char *args) {
 /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    printf("please give argument");
  }
  else {
    bool success = true;
    int result;
    result = expr(arg,&success);
    if(success){
      printf("%u\n",result);
    }else{
      printf("expression is wrong\n");
    }
  }
  return 0;
}
static int cmd_w(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    printf("please give argument");
  }
  else {
    add_wp(arg);
  }
  return 0;
}
static int cmd_d(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    printf("please give argument");
  }
  else {
    int number = atoi(arg);
    del_wp(number);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
