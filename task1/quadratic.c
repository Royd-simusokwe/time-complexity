#include <stdio.h>
#include <math.h>

int a, b, c;

int main (void)
{
    printf("Enter your a, b, and c values.\n");
    scanf("%d %d %d", &a ,&b ,&c);
    
    double sqr = sqrt(pow(b, 2)-(4*a*c));
    double add = (-b + sqr)/2*a;
    double sub = (-b - sqr)/2*a;
    
    printf("%f\n",add);
    printf("%.2f", sub);

    
    return 0;
}
