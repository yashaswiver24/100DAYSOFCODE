// Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main ()
{ 
    int n;
    printf ("Enter n: ");
    scanf ("%d",&n);
    int sum;
    sum = (n * (n+1))/2;
    printf ("The sum of first %d natural numbers is : %d ", n , sum);
    return 0;
}
