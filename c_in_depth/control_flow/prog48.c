#include <stdio.h>

int main() {
    int i, n, j;

    printf("Enter 10 numbers (each between 1 and 50):\n");

    for(i = 1; i <= 10; i++) {
        scanf("%d", &n);

        // Validate range
        if(n < 1 || n > 50) {
            printf("Number out of range! Please enter between 1 and 50.\n");
            i--; // repeat this iteration
            continue;
        }

        // Print '=' n times
        for(j = 1; j <= n; j++) {
            printf("=");
        }
        printf("\n"); // move to next line after each bar
    }

    return 0;
}
