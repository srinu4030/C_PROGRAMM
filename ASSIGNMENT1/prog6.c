//subtraction of two numbers using bitwise operators

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Convert b to (-b) using 2's complement:  ~b + 1
    int negB = ~b + 1;

    // Now add a + negB using bitwise
    int sum;
    int x = a;
    int y = negB;

    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }

    sum = x;

    printf("Subtraction = %d\n", sum);

    return 0;
}
