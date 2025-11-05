// Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, swap;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    
    printf("Before swapping: a = %d, b = %d\n", a, b);

    
    swap = a;
    a = b;
    b = swap;

    
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
