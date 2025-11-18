// Print squares of array elements 

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Squares of the array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
    printf("\n");

    return 0;
}
