// Write a program to swap the first and last digit of a number
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 10) {
        printf("After swapping: %d\n", num);
        return 0;
    }

    
    digits = (int)log10(num);

    firstDigit = num / (int)pow(10, digits);
    lastDigit = num % 10;

    
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    
    swappedNum = lastDigit * (int)pow(10, digits) + middle * 10 + firstDigit;

    
    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
