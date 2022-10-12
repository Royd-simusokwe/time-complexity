#include <stdio.h>      
int main() {
  short one;
  long two;
  long long three;
  long double four;

  printf("size of short = %d bytes\n", sizeof(one));
  printf("size of long = %d bytes\n", sizeof(two));
  printf("size of long long = %d bytes\n", sizeof(three));
  printf("size of long double= %d bytes\n", sizeof(four));
  return 0;
}