// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main()
{
    float celsius ;
    printf( "Enter temperature in celsius :");
    scanf ("%f",&celsius);
    float fahrenheit;
    fahrenheit =(celsius *9/5)+32;
    printf("The temperaturein fahrenheit  is %f\n",fahrenheit);
    return 0;
}