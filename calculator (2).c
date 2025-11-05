//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // space before %c to ignore newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        case '%':
            if ((int)num2 != 0)
                printf("Result: %d\n", (int)num1 % (int)num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}









