// Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int capitalize = 1;  // Flag to track start of a word

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else if (str[i] == ' ') {
            capitalize = 1;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s", str);
    return 0;
}
