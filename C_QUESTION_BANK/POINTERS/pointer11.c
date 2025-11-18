//Write a C program to understand the difference between a pointer to an integer and a pointer to an array of integers.

#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;          // pointer to integer
    int (*q)[5];     // pointer to array of 5 integers

    p = arr;   // Step 1: p points to first element arr[0]
    q = &arr;  // Step 1: q points to the entire array

    printf("Iteration 1:\n");
    printf("Address in p : %p | Value: %d\n", (void*)p, *p);
    printf("Address in q : %p | First element via (*q)[0] = %d\n\n", (void*)q, (*q)[0]);

    // --- Step 2: Increment both pointers ---
    p++;  // moves to next integer
    q++;  // moves to the next array (skips 5 integers)

    printf("Iteration 2 (After Increment):\n");
    printf("Address in p : %p | Value: %d\n", (void*)p, *p);
    printf("Address in q : %p | (Cannot safely dereference now)\n", (void*)q);

    return 0;
}
