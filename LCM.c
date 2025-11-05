// Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    
    lcm = (tempA * tempB) / gcd;

    
    printf("LCM of %d and %d is: %d\n", tempA, tempB, lcm);

    return 0;
}
