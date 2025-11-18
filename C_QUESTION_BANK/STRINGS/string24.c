//Write a program in C to check whether a letter is uppercase or not.


#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
        printf("%c is an uppercase letter .\n", ch);
    else
        printf("%c is not an uppercase letter .\n", ch);
    return 0;        
}

/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if (isupper(ch))
        printf("%c is an uppercase letter.\n", ch);
    else
        printf("%c is not an uppercase letter.\n", ch);

    return 0;
}
*/