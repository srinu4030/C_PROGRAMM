//. Write a  program to demonstrate how a function returns a pointer

#include <stdio.h>

// Function declaration
int* larger(int *x, int *y);

int main() {
    int a, b;
    int *result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Function call — returns pointer to the larger number
    result = larger(&a, &b);

    printf("The larger number is: %d\n", *result);

    return 0;
}

// Function definition
int* larger(int *x, int *y) {
    if (*x > *y)
        return x;   // return address of x
    else
        return y;   // return address of y
}
