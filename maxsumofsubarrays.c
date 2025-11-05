// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid input");
        return 0;
    }

    int window_sum = 0;

    
    for (int i = 0; i < k; i++)
        window_sum += arr[i];

    int max_sum = window_sum;

    
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("%d", max_sum);

    return 0;
}
