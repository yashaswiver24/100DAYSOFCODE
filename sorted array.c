// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int arr[100], n, x;
    int low = 0, high, mid;
    int ceilIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of x: ");
    scanf("%d", &x);

    high = n - 1;

    // Binary search to find ceil
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;
            high = mid - 1;    
        } else {
            low = mid + 1;    
        }
    }

    printf("%d\n", ceilIndex);
    return 0;
}
