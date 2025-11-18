//Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char word[100];
    char largest[100], smallest[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline at the end if present
    str[strcspn(str, "\n")] = '\0';

    // Initialize smallest and largest with first word
    int firstWord = 1;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i]; // Build the word
        } else {
            if (j != 0) { // End of a word
                word[j] = '\0'; // Terminate the word string

                if (firstWord) {
                    strcpy(largest, word);
                    strcpy(smallest, word);
                    firstWord = 0;
                } else {
                    if (strlen(word) > strlen(largest))
                        strcpy(largest, word);
                    if (strlen(word) < strlen(smallest))
                        strcpy(smallest, word);
                }

                j = 0; // Reset for next word
            }
            if (str[i] == '\0') break; // End of string
        }
        i++;
    }

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    return 0;
}
