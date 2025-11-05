// Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    while (num != 0) {
        remainder = num % 10;   
        sum += remainder;        
        num /= 10;  
    }

    // Output the result
    printf("Sum of digits = %d\n", sum);

    return 0;
}