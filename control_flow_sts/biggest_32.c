//using while loop and temporary variable

#include <stdio.h>

int main() {
    int a, b, c, max;
    char next = 'Y';

    while (next == 'Y' || next == 'y') {
        printf("Enter the three numbers: ");
        scanf("%d %d %d", &a, &b, &c);

        max = a;
        if (b > max)
            max = b;
        if (c > max)
            max = c;

        printf("The biggest of the three numbers is %d\n", max);

        printf("Do you want to check another set of numbers? (Y/N): ");
        scanf(" %c", &next);  // <-- NOTE the space before %c
    }

    printf("Terminated\n");
    return 0;
}
