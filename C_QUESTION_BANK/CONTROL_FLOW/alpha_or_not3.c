//using conditional operator

#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Using ternary operator for alphabet check
    ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ?
        printf("'%c' is an alphabet character.\n", ch) :
        printf("'%c' is NOT an alphabet character.\n", ch);

    return 0;
}
