#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define ul unsigned long long
#define uint unsigned int
#define strcat_out(a,b) *a = '\0';strcat(a,b);a += strlen(b);

ul my_pow(int a,int b){
  ul ans = a;
  while(--b){
    ans *= a;
  }
  return ans;
}

char* number_to_str(const char *str, ul number, ul scale){
  char *str_t = (char *)str;
  int temp;
  if(number < scale){
    if(number < 10){
      *str_t++ = number + '0';
    }else{
      *str_t++ = number + 'A' - 10;
    }
    *str_t = '\0';
    return str_t;
  }else{
    str_t = number_to_str(str,number/scale,scale);
    temp = number%scale;
    if(temp < 10){
      *str_t++ = temp + '0';
    }else{
      *str_t++ = temp + 'A' - 10;
    }
    *str_t = '\0';
    return str_t;
  }
}

char* parse_number(const char *fmt, int *number){
  char *fmt_t = (char *)fmt;
  *number = 0;
  while(*fmt_t>='0' && *fmt_t<='9'){
    *number *=10;
    *number += *fmt_t-'0';
    fmt_t++;
  }
  return fmt_t;
}

char* insert_space(const char *out, int number,char ch){
  char *out_t = (char *)out;
  for(int i=0;i<number; i++){
    *out_t++ = ch;
  }
  return out_t;
}
// for debug
int debug_printf(const char *fmt, ...) {
  assert(fmt != NULL);

  // int count = 0;

  // char* ArgStr = NULL;      // 接收字符型
  // char ch;
  // int ArgInt = 0;
  // char str_temp[100];
  // ul num_temp = 0;

  // va_list args;
  // va_start(args,fmt);
  // while(*fmt != '\0'){
  //   if(*fmt == '%'){
  //     fmt++;
  //     if(*fmt == 's'){
  //       ArgStr = va_arg(args, char*);
  //       while(*ArgStr !='\0'){
  //         putch(*ArgStr);
  //         ArgStr++;
  //       }
  //     }else if(*fmt == 'd'){
  //       ArgInt = va_arg(args, ul);
  //       if(ArgInt<0){
  //         putch('-');
  //         ArgInt = -ArgInt;
  //         num_temp = UINT_MAX - ((unsigned int)(ArgInt)) + 1U;
  //       }
  //       number_to_str(str_temp,(ul)num_temp,10);
  //       debug_printf("%s",str_temp);
  //     }
  //     else if(*fmt == 'u'){
  //       num_temp = va_arg(args, ul);
  //       number_to_str(str_temp,(ul)num_temp,10);
  //       printf("%s",str_temp);
  //     }else if(*fmt == 'c'){
  //       ArgInt = va_arg(args, int);
  //       putch(ArgInt);
  //     }
  //   }else{
  //     putch(*fmt);
  //   } 
  //   fmt++;
  // }
  // va_end(args);
  // return count;
  return 0;
}

int printf(const char *fmt, ...) {
  assert(fmt != NULL);
  char str[1024];
  va_list args;
  va_start(args,fmt);

  int count = vsprintf(str,fmt,args);
  for(int i=0; i<count; i++){
    putch(str[i]);
  }
  va_end(args);
  
  return count;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  assert(fmt != NULL);

  char *out_t;
  out_t = out;

  char str_temp[1024];
  // unsigned long num_temp;

  char* ArgStr = NULL;      // 接收字符型
  int ArgInt = 0;           // 接收整型
  unsigned int ArgUInt = 0; // 接收无符号
  unsigned long ArgHex = 0; // 接收十六进制
  unsigned long ArgLong = 0;
  // double  ArgFloat = 0;     // 接收浮点数

  char Sign = '\0';         //符号
  char fill_char = ' ';     //填充的字符 空格/0
  int num_before_dig = 0;
  int num_after_dig = 0;

  while(*fmt != '\0'){
    if(*fmt == '%'){
      fmt++;
      if(*fmt == '%'){
        *out_t++ = '%';
        fmt++;
        continue;
      }

      if(*fmt == '-' || *fmt == '+' || *fmt == ' '){
        Sign = *fmt;
        fmt++;
      }

      fill_char = ' ';
      if(*fmt == '0'){
        fill_char = *fmt;
        fmt++;
      }

      fmt = parse_number(fmt,&num_before_dig);
      if(*fmt == '.'){
        fmt++;
        fmt = parse_number(fmt,&num_after_dig);
      }

      if(*fmt == 's'){
        ArgStr = va_arg(ap, char*);
        strcat_out(out_t,ArgStr);
      }else if(*fmt == 'c'){
        ArgInt = va_arg(ap, int);
        *out_t++ = ArgInt;
      }else if(*fmt == 'd'){
        ArgInt = va_arg(ap, int);
        ArgStr = str_temp;

        if(ArgInt < 0){
          *ArgStr++ = '-';
          ArgUInt = ArgInt;
          ArgUInt = (~ArgUInt)+1;
        }else{
          if(Sign == '+' || Sign == ' '){
            *ArgStr++ = Sign;
          }
          ArgUInt = ArgInt;
          Sign = '\0';
        }
        number_to_str(ArgStr,ArgUInt,10);
        out_t = insert_space(out_t,num_before_dig-strlen(str_temp),fill_char);
       
        strcat_out(out_t,str_temp);
      }
      else if(*fmt == 'u'){
        ArgUInt = va_arg(ap, unsigned int);
        number_to_str(str_temp,(ul)ArgUInt,10);
        out_t = insert_space(out_t,num_before_dig-strlen(str_temp),fill_char);
        strcat_out(out_t,str_temp);
      }else if(*fmt == 'x'){
        ArgHex = va_arg(ap, unsigned long);
        number_to_str(str_temp,(ul)ArgHex,16);
        out_t = insert_space(out_t,num_before_dig-strlen(str_temp),fill_char);
        strcat_out(out_t,str_temp);
      }else if(*fmt == 'l' && *(fmt+1) == 'd'){
        fmt++;
        ArgLong = va_arg(ap, unsigned long);
        number_to_str(str_temp,(ul)ArgLong,10);
        out_t = insert_space(out_t,num_before_dig-strlen(str_temp),fill_char);
        strcat_out(out_t,str_temp);
      }else if(*fmt == 'f'){
        // ArgFloat = va_arg(ap, double);
        // ArgStr = str_temp;
        
        // if(ArgFloat < 0){
        //   *ArgStr++ = '-';
        //   ArgFloat = -ArgFloat;
        // }

        // num_temp = (ul)ArgFloat;
        // ArgFloat = ArgFloat - num_temp;
        //整数位
        // ArgStr = number_to_str(ArgStr,(ul)num_temp,10);
        //小数点
        *ArgStr++ = '.';
        *ArgStr = '\0';
        //小数位
        // num_temp = num_after_dig == 0 ? (ArgFloat + 1e-6)* 1000000 : ArgFloat*(my_pow(10,num_after_dig))+0.5;
        // ArgStr = number_to_str(ArgStr,(ul)num_temp,10);

        // out_t = insert_space(out_t,num_before_dig-strlen(str_temp));
        // strcat_out(out_t,str_temp);
      }

      num_before_dig = 0;
      num_after_dig = 0;
    }else{
      *out_t++ = *fmt;
    }
    fmt++;
  }
  
  *out_t++ = '\0';
  return out_t-out;
}


int sprintf(char *out, const char *fmt, ...) {
  assert(fmt != NULL);

  va_list args;
  va_start(args,fmt);

  int count = vsprintf(out,fmt,args);

  va_end(args);
  return count;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
