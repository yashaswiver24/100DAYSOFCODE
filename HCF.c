// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, hcf;

    // Input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using the Euclidean algorithm
    int x = a, y = b;
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    hcf = x;

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);
    return 0;
}
