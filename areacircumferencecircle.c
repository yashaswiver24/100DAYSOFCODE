// Write a program to calculate the area and circumference of a  circle given radius.
#include <stdio.h>

int main()
{
    float radius ;
    printf( "Enter radius :");
    scanf ("%f",&radius);
    float pi;
    pi = 3.1415;
    float area , circumference  ;
    area = pi*radius*radius;
    circumference  = 2 * pi* radius ;
    printf("The area  is %f\n",area);
    printf("The circumference is %f\n",circumference);
    return 0;
}