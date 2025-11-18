// Write a program to print the value and address of array elements by subscripting  a pointer variable.

#include <stdio.h>

int main() {
    int arr[] = {10,20,30,40,50};
    int *ptr = arr; // pointer points to the first element of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Index\tAddress\t\tValue\n");
    printf("------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%p\t%d\n", i, &ptr[i], ptr[i]);
    }

    return 0;
}
