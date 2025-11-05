// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    int expected_sum = n * (n + 1) / 2;
    int missing = expected_sum - sum;

    printf("%d", missing);

    return 0;
}

