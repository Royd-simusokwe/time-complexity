#include<stdio.h>


int main()
{   
    int n ;
    int j ;
    for( n = 0; n < 6; n++){
        for(j = 0; j <  (1 * 6); j++)
        {
          if(j > 6 - (n + 1) && j < 6 + (n + 1)){
            printf("*");}
          else{
            printf("");
          }
           
        }
        
    printf("*\n");
     
    }
    return 0;
}
