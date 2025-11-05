// Write a program to input two numbers and display their sum.
#include <stdio.h>

int main()
{
    int x , y;
    printf( "Enter first number :");
    scanf ("%d",&x);
    printf ("Enter Second number :");
    scanf ("%d",&y);
    int sum;
    sum = x+y;
    printf("The sum is %d",sum);

    return 0;
}