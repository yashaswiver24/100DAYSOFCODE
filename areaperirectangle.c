// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    int length , breadth ;
    printf( "Enter length :");
    scanf ("%d",&length);
    printf ("Enter breadth :");
    scanf ("%d",&breadth);
    int area , perimeter  ;
    area = length * breadth ;
    perimeter  = 2 * ( length + breadth);
    printf("The area  is %d\n",area);
    printf("The perimeter is %d\n",perimeter);
    

    return 0;
}