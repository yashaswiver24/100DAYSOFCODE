// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
#include <stdlib.h>

/**
 * Helper function to find either the first or the last occurrence of a target 
 * in a sorted array using binary search.
 * 
 * @param nums The sorted array.
 * @param size The size of the array.
 * @param target The integer to search for.
 * @param find_first A boolean flag: 1 to find the first occurrence, 0 to find the last.
 * @return The index of the occurrence, or -1 if not found.
 */
int binary_search_occurrence(int nums[], int size, int target, int find_first) {
    int left = 0;
    int right = size - 1;
    int index = -1;

    while (left <= right) {
        // Safe way to calculate mid to prevent overflow
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            index = mid;
            if (find_first) {
                // If looking for the first occurrence, continue searching in the left half
                right = mid - 1;
            } else {
                // If looking for the last occurrence, continue searching in the right half
                left = mid + 1;
            }
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return index;
}

/**
 * Finds the first and last occurrence of a target value in a sorted array.
 * 
 * @param nums The sorted array.
 * @param size The size of the array.
 * @param target The integer to search for.
 * @param first_occurrence Pointer to store the index of the first occurrence.
 * @param last_occurrence Pointer to store the index of the last occurrence.
 */
void find_first_and_last_occurrence(int nums[], int size, int target, int *first_occurrence, int *last_occurrence) {
    *first_occurrence = binary_search_occurrence(nums, size, target, 1);
    
    if (*first_occurrence == -1) {
        // If the first occurrence is -1, the target is not in the array at all
        *last_occurrence = -1;
        return;
    }
    
    *last_occurrence = binary_search_occurrence(nums, size, target, 0);
}

// Main function to test the program
int main() {
    // Sample Test Case 1
    int nums1[] = {5, 7, 7, 8, 8, 10};
    int target1 = 8;
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int first1, last1;
    find_first_and_last_occurrence(nums1, size1, target1, &first1, &last1);
    printf("Input 1: nums = [5,7,7,8,8,10], target = 8\n");
    printf("Output 1: %d,%d\n", first1, last1); // Expected: 3,4
    printf("--------------------------\n");

    // Sample Test Case 2
    int nums2[] = {5, 7, 7, 8, 8, 10};
    int target2 = 6;
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int first2, last2;
    find_first_and_last_occurrence(nums2, size2, target2, &first2, &last2);
    printf("Input 2: nums = [5,7,7,8,8,10], target = 6\n");
    printf("Output 2: %d,%d\n", first2, last2); // Expected: -1,-1
    printf("--------------------------\n");

    // Sample Test Case 3
    int nums3[] = {5, 7, 7, 8, 8, 10};
    int target3 = 10;
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int first3, last3;
    find_first_and_last_occurrence(nums3, size3, target3, &first3, &last3);
    printf("Input 3: nums = [5,7,7,8,8,10], target = 10\n");
    printf("Output 3: %d,%d\n", first3, last3); // Expected: 5,5
    printf("--------------------------\n");

    return 0;
}
