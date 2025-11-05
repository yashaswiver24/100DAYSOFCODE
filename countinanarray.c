// Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // declare array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero numbers
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    // Display results
    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d\n", zero);

    return 0;
}
