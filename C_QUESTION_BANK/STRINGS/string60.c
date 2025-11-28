/* Write a C program to find the lowest frequency character in a string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int min = 9999;
    char minChar = '\0';

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int n = strlen(str);
    if (str[n-1] == '\n')
        str[n-1] = '\0';

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c == ' ' || c == '\n' || c == '\t')  
            continue;  // skip unwanted chars

        freq[(unsigned char)c]++;
    }

    // Find lowest frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && freq[i] < min) {
            min = freq[i];
            minChar = (char)i;
        }
    }

    printf("Character with lowest frequency: '%c'\n", minChar);
    printf("Frequency: %d\n", min);

    return 0;
}

