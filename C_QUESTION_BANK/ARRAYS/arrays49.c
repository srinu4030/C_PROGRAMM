//Write a recursive function to reverse the elements of an array.

#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    // Base case
    if (start >= end)
        return;

    // Swap elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive call for the next pair
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverseArray(arr, 0, n - 1);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
