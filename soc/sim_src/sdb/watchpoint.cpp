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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char exp[32];
  uint32_t value;

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(char *exp, bool *success){
  assert(free_ != NULL);
  // check expression is legal
  uint32_t result = expr(exp,success);
  if(*success == false){
    return NULL;
  }

  WP *temp = free_;
  free_ = free_->next;
  temp->next = NULL;

  strcpy(temp->exp,exp);
  temp->value = result;
  
  if(head == NULL){
    head = temp;
  }else{
    WP *p = head;
    while(p->next){
      p = p->next;
    }
    p->next = temp;
  }
  return temp;
}
bool free_wp(WP *wp){
  if(wp == NULL){
    printf("wp is wrong!");
    return 1;
  }
  if(wp == head){
    head = head->next;
    wp->next = free_;
    free_ = wp;
  }else{
    WP *p = head;
    while(p->next != wp){
      p = p->next;
      if(p == NULL){
        return 1;
      }
    }
    p->next = wp->next;
    wp->next = free_;
    free_ = wp;
  }
  return 0;
}

void add_wp(char *exp){
  bool success = true;
  WP* wp = new_wp(exp,&success);
  if(success){
    Log("Add watchpoint %d %s successfully",wp->NO,wp->exp);
  }else{
    Log("Failed to add watchpoint");
  }
}

void del_wp(int num){
  if(num<0 || num >NR_WP){
    Log("N=%d is out of range!",num);
    return ;
  }
  WP *p = head;
  while(p->NO != num){
    p = p->next;
  }
  if(free_wp(p)){
    Log("There is no watchpoint which NO is%d!",num);
  }else{
    Log("Del watchpoint %d successfully!",num);
  }
  return ;
}

void wp_display(){
  WP *p = head;
  while(p != NULL){
    bool success = true;
    uint32_t temp = expr(p->exp,&success);
    if(p->value != temp){
      printf("\033[1;35mwatchpoint %d : %s  old_value is %08x new_value is %08x\033[0m\n",p->NO,p->exp,p->value,temp);
    }else{
      printf("watchpoint %d : %s   value is %08x\n",p->NO,p->exp,p->value);
    }
    p->value = temp;
    p = p->next;
  }
} 

bool check_diff(){
  WP *p = head;
  while(p != NULL){
    bool success = true;
    uint32_t temp = expr(p->exp,&success);
    if(p->value != temp){
      return 1;
    }
    p = p->next;
  }
  return 0;
}
