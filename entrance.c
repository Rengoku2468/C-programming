#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  char wi = 'a';
  char *ptr = &wi;
  printf("%c,%c,%llu", wi, *ptr, (uint64_t)ptr);
  unsigned x = 'A';
  ptr = (char *)&x;
  printf("%u %c %llu", x, *ptr, (uint64_t)ptr);
  return EXIT_SUCCESS;
}
