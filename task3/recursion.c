#include <stdio.h>

//prototype
void bricks(int n);

// main function/method
int main(int agrc, char* argc[]){

    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    bricks(i);
    return(0);
}

// implementation
void bricks(int n){
    for (size_t i = 0; i < n; i++)
    {
         for (size_t j = 0; j < i + 1; j++){
            printf("#");
         }
         printf("\n");
    };
}