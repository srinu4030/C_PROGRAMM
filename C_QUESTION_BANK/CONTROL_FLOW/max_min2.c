#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
