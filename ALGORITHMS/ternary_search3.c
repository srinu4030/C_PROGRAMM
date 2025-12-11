//Ternary Search Algorithm

// C Program to illustrate Ternary Search
#include <stdio.h>

// Ternary search function
int ternarySearch(int arr[], int left, int right,
                  int target)
{
    // Check if the left boundary is less than or equal to
    // the right boundary
    if (left <= right) {
        // Calculate two midpoints dividing the current
        // subarray into three equal parts
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        // Check if the target is equal to either of the
        // midpoints
        if (arr[mid1] == target)
            return mid1;
        if (arr[mid2] == target)
            return mid2;

        // If the target is less than the element at mid1,
        // search in the left third of the subarray
        if (target < arr[mid1])
            return ternarySearch(arr, left, mid1 - 1,
                                 target);
        // If the target is greater than the element at
        // mid2, search in the right third of the subarray
        else if (target > arr[mid2])
            return ternarySearch(arr, mid2 + 1, right,
                                 target);
        // If the target is in between mid1 and mid2,
        // search in the middle third of the subarray
        else
            return ternarySearch(arr, mid1 + 1, mid2 - 1,
                                 target);
    }
    // Element not found, return -1
    return -1;
}

int main()
{
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int target = 13;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the ternarySearch function to find the target
    // element
    int result = ternarySearch(arr, 0, n - 1, target);

    // Check if the result is not -1 (element found) and
    // print the index
    if (result != -1)
        printf("Element %d found at index %d\n", target,
               result);
    // If result is -1, the element was not found in the
    // array
    else
        printf("Element %d not found in the array\n",
               target);

    return 0;
}