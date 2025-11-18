//Write a program in C to check whether a character is a digit or not.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("%c is a digit.\n", ch);
    else
        printf("%c is NOT a digit.\n", ch);

    return 0;
}
