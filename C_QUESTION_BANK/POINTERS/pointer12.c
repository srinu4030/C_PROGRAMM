//Write  a program to dereference a pointer to an array.

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Pointer to the entire array of 5 integers
    int (*ptr)[5] = &arr;

    printf("Array elements using pointer to array:\n");

    // Access elements by dereferencing the pointer
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*ptr)[i]);
    }

    return 0;
}
