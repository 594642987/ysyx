/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 1024] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int choose(int n){
  return rand()%n;
}


void gen(char ch){
  int buf_len = strlen(buf);
  buf[buf_len] = ch;
  buf[buf_len+1] = '\0';
}

void gen_rand_op(){
  int num = rand()%8;
  switch (num)
  {
  case 0:
    gen('+');
    break;
  case 1:
    gen('-');
    break;
  case 2:
    gen('*');
    break;
  case 3:
    gen('/');
    break;
  case 4:
    gen('&');
    gen('&');
    break;
  case 5:
    gen('|');
    gen('|');
    break;
  case 6:
    gen('=');
    gen('=');
    break;
  case 7:
    gen('!');
    gen('=');
    break;
  default:
    break;
  }
}

void gen_num(){
  int num = (rand()%100);
  char str[10];
  sprintf(str,"%d",num);
  int buf_len = strlen(buf);
  int num_len = strlen(str);
  for(int i=0; i<num_len; i++){
    buf[buf_len + i] = str[i];
  }
  buf[buf_len+num_len] = '\0';
  // gen_rand_op();
}


static void gen_rand_expr(int n) {
  switch (choose(3)) {
    case 0:
      if(n == 1){
        gen_num(); gen_rand_op(); gen_num(); break;
      }else{
        gen_num(); break;
      }
    case 1: 
    if(n == 1){
      gen_rand_expr(1); break;
    }else{
      gen('('); gen_rand_expr(1); gen(')'); break;
    }
    default: gen_rand_expr(2); gen_rand_op(); gen_rand_expr(2); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    memset(buf,'\0',sizeof(buf));
    gen_rand_expr(0);

    // printf("%s",buf);
    if(strlen(buf)<5 || strlen(buf)>50){
      continue;
    }

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/home/jimple/Documents/ysyx/ysyx-workbench/nemu/tools/gen-expr/code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /home/jimple/Documents/ysyx/ysyx-workbench/nemu/tools/gen-expr/code.c -o /home/jimple/Documents/ysyx/ysyx-workbench/nemu/tools/gen-expr/expr");
    if (ret != 0) continue;

    fp = popen("/home/jimple/Documents/ysyx/ysyx-workbench/nemu/tools/gen-expr/expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);
    if(result<1000000){
      printf("%u %s\n", result, buf);
    }
  }
  return 0;
}

