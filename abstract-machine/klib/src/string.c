#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  // assert(s != NULL);
  if(s == NULL){
    halt(-1);
  }
  
  unsigned long i = 0;
  while(s[i] != '\0'){
    i++;
  }
  return i;
}

char *strcpy(char *dst, const char *src) {
  if(dst == NULL){
    halt(-1);
  }
  if(src == NULL){
    halt(-1);
  }
  // assert(dst != NULL);
  // assert(src != NULL);
  char *dst_t = dst;
  while(*src != '\0'){
    *dst_t++ = *src++;
  }
  *dst_t = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  assert(dst != NULL);
  assert(src != NULL);
  char *dst_t = dst;
  for(; n; n--){
    *dst_t++ = *src++;
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  char *dst_t = dst;
  while(*dst_t != '\0'){
    dst_t++;
  }
  while(*src != '\0'){
    *dst_t++ = *src++;
  }
  *dst_t = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  int ret = 0;
  char *s1_t = (char *)s1;
  char *s2_t = (char *)s2;
   while(*s1_t != '\0' && *s2_t != '\0'){
    ret = *s1_t++ - *s2_t++;
    if(ret != 0){
      return ret;
    }
  }
  ret = *s1_t - *s2_t;
  return ret;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  int ret = 0;
  char *s1_t = (char *)s1;
  char *s2_t = (char *)s2;
  for(size_t i=0; i<n; i++){
    ret = *s1_t++ - *s2_t++;
    if(ret != 0){
      break;
    }
  }
  return ret;
}

void *memset(void *s, int c, size_t n) {
  assert(s != NULL);
  char *s_t = (char *)s;
  for(size_t i=0; i<n; i++){
    *(s_t++) = c;
  }
  return s;
}
/* The memory areas may overlap: copying takes place as though the bytes in src are first
       copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest*/
// 从前往后会存在重叠情况，只要从后往前复制就不会出现了
void *memmove(void *dst, const void *src, size_t n) {
  char *dst_t = (char *) dst;
  char *src_t = (char *) src;
  if(dst <= src){
    for(size_t i=0; i<n; i++){
      *(dst_t++) = *(src_t++);
    }
  }else{
    dst_t = dst_t + n - 1;
    src_t = src_t + n - 1;
    for(size_t i=0; i<n; i++){
      *(dst_t--) = *(src_t--);
    }
  }
  return dst;
}
// memcpy本身不允许重叠
void  *memcpy (void *dst, const void *src, size_t n) {
  memmove(dst,src,n);
  return dst;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  int ret = 0;
  char *s1_t = (char *)s1;
  char *s2_t = (char *)s2;
  for(size_t i=0; i<n; i++){
    ret = *(s1_t++) - *(s2_t++);
    if(ret != 0){
      break;
    }
  }
  return ret;
}

#endif
