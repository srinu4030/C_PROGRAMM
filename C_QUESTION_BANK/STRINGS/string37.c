/*Write a C program to multiply two positive numbers as strings. Return a string 
representation of the product.*/

#include <stdio.h>
#include <string.h>

int main() {
    char num1[] = "12";
    char num2[] = "34";

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // result array length = len1 + len2 (maximum possible digits)
    int result[len1 + len2];
    for (int k = 0; k < len1 + len2; k++) result[k] = 0;

    // Core multiplication: multiply each digit of num1 by each digit of num2
    for (int i = len1 - 1; i >= 0; i--) {         // i goes 1 -> 0 for "12"
        for (int j = len2 - 1; j >= 0; j--) {     // j goes 1 -> 0 for "34"
            int d1 = num1[i] - '0';               // numeric value of num1[i]
            int d2 = num2[j] - '0';               // numeric value of num2[j]

            int pos = i + j;          // index for carry
            int pos2 = i + j + 1;     // index for the digit (units place for this multiplication)

            int mul = d1 * d2 + result[pos2];   // add existing value at pos2 (previous partial sum)
            result[pos2] = mul % 10;            // store the current digit
            result[pos] += mul / 10;            // add carry to the previous position
        }
    }

    // print result skipping leading zeros
    int start = 0;
    while (start < len1 + len2 && result[start] == 0) start++;
    if (start == len1 + len2) printf("0\n");
    else {
        for (int k = start; k < len1 + len2; k++) printf("%d", result[k]);
        printf("\n");
    }

    return 0;
}
