/* Implement a C program to check if the given number is a palindrome in binary 
representation using bitwise operators.*/

#include <stdio.h>
int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    int left = 31;   // leftmost bit position
    int right = 0;   // rightmost bit position
    while (left > right) {
        int leftBit = (num >> left) & 1;   // take left bit
        int rightBit = (num >> right) & 1; // take right bit
        // ignore leading zeros on the left side
        if (leftBit == 0) {
            left--;
            continue;
        }
        // Check mismatch
        if (leftBit != rightBit) {
            printf("Not a binary palindrome\n");
            return 0;
        }
        left--;
        right++;
    }
    printf("Binary palindrome\n");
    return 0;
}
