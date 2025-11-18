#include <stdio.h>

int max(int, int);
int min(int, int);
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Maximum = %d\n", max(x, y));
    printf("Minimum = %d\n", min(x, y));

    return 0;
}

//Function to find maximum
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find minimum
int min(int a, int b) {
    return (a < b) ? a : b;
}