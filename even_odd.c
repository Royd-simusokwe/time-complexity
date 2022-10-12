#include <stdio.h>

int main(void){
  int r;
  printf("Enter a number\n");
  scanf("%d",&r);
  if(r%2 == 0){
    printf("This is an even number");
  }else{
    printf("This number is an odd number");
  }
  return 0;
}