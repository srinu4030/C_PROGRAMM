//To count number of words repeated in a text

#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    char word[100];
    int count = 0;

    // Read input text
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    // Read the word to count
    printf("Enter the word to count: ");
    scanf("%s", word);

    // Remove the newline character from text
    text[strlen(text) - 1] = '\0';

    // Count occurrences of the word
    char *ptr = text;
    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr += strlen(word);   // Move pointer forward
    }

    // Print result
    printf("The word '%s' appears %d times in the text.\n", word, count);

    return 0;
}
