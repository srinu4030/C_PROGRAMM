#include <stdio.h>

int main() {
    int num, digit, start, reverse;

    printf("All four-digit palindrome numbers are:\n");

    for (num = 1000; num <= 9999; num++) {
        start = num;
        reverse = 0;

        // Reverse the number
        int temp = num;
        while (temp > 0) {
            digit = temp % 10;
            reverse = (reverse * 10) + digit;
            temp /= 10;
        }

        // Check palindrome
        if (start == reverse) {
            printf("%d\n", start);
        }
    }

    return 0;
}
