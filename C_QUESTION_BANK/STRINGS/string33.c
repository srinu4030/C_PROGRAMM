//Write a C program to count each character in a given string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Frequency array for all ASCII characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // Read string with spaces

    // Count character frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    printf("\nCharacter Frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != '\n') {   // Ignore newline by fgets
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

    return 0;
}
