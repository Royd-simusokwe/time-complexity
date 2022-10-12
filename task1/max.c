#include<stdio.h>


int main(void)
{   int num;
    printf("Enter a number between 0 - 20\n");
    scanf("%d",&num);
    
    if(num >= 10){
        printf("%d is the max",num);
        }else if(num < 10){
            printf("%d is the min", num);
        }
    return 0;
}