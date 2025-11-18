// Function to calculate the product of array elements

#include <stdio.h>
int productArray(int arr[], int n);
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prod = productArray(arr, n);
    printf("The product of all elements is: %d\n", prod);

    return 0;
}
int productArray(int arr[], int n) {
    int product = 1;
    for(int i = 0; i < n; i++) {
        product *= arr[i];
    }
    return product;
}
