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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/paddr.h>

#define TOKENS_NUM  128
enum {
  TK_NOTYPE = 256, TK_EQ=255, 

  /* TODO: Add more token types */
  TK_AND=254,TK_OR=253,TK_NEQ=252,TK_HNUM=251,TK_DNUM=250,
  TK_REG=249,TK_DEREF=248,TK_MINUS=247,
  TK_ADD=246,
  TK_SUB=245,
  TK_MUL=244,
  TK_DIV=243,
  TK_NOT=242,
  TK_LBAR=241,
  TK_RBAR=240,
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */
    /*
    the first \ is to tranfer the second \(special char) into \(normal char), 
    \(normal char) is to tranfer * is mul but not a matched pattern which is(贪婪匹配)
    */
    {" +", TK_NOTYPE},                        // spaces
    {"0[xX][0-9a-fA-F]+", TK_HNUM},           // hnum
    {"[0-9]+", TK_DNUM},                      // dnum
    {"(\\$[a-zA-Z0-9]+)|([xX][0-9]+)", TK_REG}, // reg
    {"\\|\\|", TK_OR},                        // or
    {"&&", TK_AND},                           // and
    {"==", TK_EQ},                            // equal
    {"!=", TK_NEQ},                           // not equal
    {"\\+", TK_ADD},                          // plus
    {"-", TK_SUB},                            // sub
    {"\\*", TK_MUL},                          // mul
    {"/", TK_DIV},                            // div
    {"!", TK_NOT},                            // not
    {"\\(", TK_LBAR},                         // lbar
    {"\\)", TK_RBAR},                         // rbar

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[TOKENS_NUM] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static int make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          default:{
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            // printf("%s\n",tokens[nr_token].str);
            nr_token++;
          } 
        }
        assert(nr_token<TOKENS_NUM);
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

static int check_parentheses(int p, int q){
  if(tokens[p].type != TK_LBAR || tokens[q].type != TK_RBAR){
    return false;
  }
  int count = 0;
  for(int i=p;i<=q; i++){
    if(tokens[p].type == TK_LBAR){
      count++;
    }else if(tokens[p].type != TK_RBAR){
      count--;
    }
    if(count == 0 && i<q){
      return false;
    }
  }
  if(count <0){
    return false;
  }else{
    return true;
  }
}

static int token_is_num(int p){
  if(tokens[p].type != TK_DNUM && tokens[p].type != TK_HNUM && tokens[p].type != TK_REG){
    return false;
  }else{
    return true;
  }
}

int rules_level(int pos){
  switch(tokens[pos].type){
    case TK_OR:
      return 0;
    case TK_AND:
      return 1;
    case TK_NEQ:
    case TK_EQ:
      return 2;
    case TK_ADD: 
    case TK_SUB: 
      return 3;
    case TK_MUL: 
    case TK_DIV: 
      return 4;
    case TK_DEREF:
    case TK_MINUS:
      return 5;
    default:
      Log("Undefine rules  pos:%d type:%d\n",pos,tokens[pos].type);
      assert(0);
  }
}
int find_operation(int p, int q){
  int level = 10;
  int pos = p;
  int count = 0;
  // Subtraction starts from left to right, so you need to split the symbols from right to left
  for(int i=q; i>=p; i--){
    if(token_is_num(i)){
      continue;
    }
    // to find the symbol out of bar.
    else if(tokens[i].type == TK_LBAR){
      count ++;
      continue;
    }
    else if(tokens[i].type == TK_RBAR){
      count --;
      continue;
    }
    if(rules_level(i)<level && count == 0){
      level = rules_level(i);
      pos = i;
    }
  }
  return pos;
}
uint32_t eval(int p, int q, bool *success) {
  if (p > q) {
    Log("The input is wrong p:%d q:%d\n",p,q);
    *success = false;
    return 0;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    if(token_is_num(p) == false){
      printf("Single token is wrong\n");
      *success = false;
      return 0;
    }

    int number = 0;
    if(tokens[p].type == TK_REG){
      bool result = true;
      number = isa_reg_str2val(tokens[p].str+1, &result);
      //Log("number:%08x,str:%s,result:%d\n",number,tokens[p].str,result);
      if(result == 0){
        *success = false;
        return 0;
      }
      return number;
    }
    else if(tokens[p].type == TK_HNUM){
      number = strtol(tokens[p].str,NULL,16);
      return number;
    }else{
      number = atoi(tokens[p].str);
      //Log("p:%d type:%d,number:%d,str:%s",p,tokens[p].type,number,tokens[p].str);
      return number;
    }
  }
  else {
    /* We should do more things here. */
    int pos = find_operation(p,q);
/* We should check there are not any symbol out of bar before we check a pair of bar first.
  If have, we should split the expression by the symbol before.
*/
    if(pos == p && check_parentheses(p, q) == true ){
/* The expression is surrounded by a matched pair of parentheses.
* If that is the case, just throw away the parentheses.
*/
      return eval(p + 1, q - 1, success);
    }

    uint32_t val1=0,val2=0;
    bool s1=true,s2=true;
    /*
      If not minus or deref, continue to divie the expression by main operation
    */
    if (tokens[pos].type != TK_MINUS && tokens[pos].type != TK_DEREF){
      val1 = eval(p,pos-1,&s1);
      val2 = eval(pos+1,q,&s2);
      if(!s1 || !s2){
        *success = false;
        return 0;
      }
    }
    /*
      If deref,we should get the result of REG to known the address of pointer
    */
    if(tokens[pos].type == TK_DEREF){
      val2 = eval(pos+1,q,&s2);
      if(!s2){
        *success = false;
        return 0;
      }
    }
    
    // Log("val1:%u val2:%u pos:%d str:%s type:%d",val1,val2,pos,tokens[pos].str,tokens[pos].type);
    switch (tokens[pos].type) {
      case TK_ADD: return val1 + val2;
      case TK_SUB: return val1 - val2;
      case TK_MUL: return val1 * val2;
      case TK_DIV: 
        if(val2 == 0){
          *success = false;
          return 0;
        }
        return val1 / val2;
      case TK_LBAR:
      case TK_RBAR:
          *success = false;
          return 0;
      case TK_EQ:
          return val1 == val2;
      case TK_NEQ:
          return val1 != val2;
      case TK_AND:
          return val1 && val2;
      case TK_OR:
          return val1 || val2;
      case TK_MINUS:
          return -val2;
      case TK_DEREF:
          return paddr_read(val2, 4);
      default: 
        *success = false;
        Log("Unknown operation!");
        assert(0);
        return 0;
    }
  }
  return 0;
}

int certain_type(int pos){
  if((tokens[pos].type != TK_DNUM  && tokens[pos].type != TK_HNUM && tokens[pos].type != TK_REG && tokens[pos].type !=TK_RBAR)){
    return 1;
  }else{
    return 0;
  }
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  // TODO();
  int i;
  for (i = 0; i < nr_token; i ++) {
    //there should not have dnum ,hnum, ')' ,reg before * 
    if (tokens[i].type == TK_MUL && (i == 0 || certain_type(i-1) ) ) {
      tokens[i].type = TK_DEREF;
    }
    //if have not dnum ,hnum, ')' ,reg before - , it would be minus num
    if (tokens[i].type == TK_SUB && (i == 0 || certain_type(i-1)) ) {
      tokens[i].type = TK_MINUS;
    }
  }
  return eval(0, nr_token-1,success);

  //return 0;
}
