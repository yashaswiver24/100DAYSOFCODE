// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int x , y;
    printf( "Enter first number :");
    scanf ("%d",&x);
    printf ("Enter Second number :");
    scanf ("%d",&y);
    int sum , diff ,prod , quo  ;
    sum = x+y;
    diff = x-y;
    prod = x*y;
    quo = x/y;
    printf("The sum is %d\n",sum);
    printf("The difference is %d\n",diff);
    printf("The product is %d\n",prod);
    printf("The quotient is %d\n",quo);
    

    return 0;
} 