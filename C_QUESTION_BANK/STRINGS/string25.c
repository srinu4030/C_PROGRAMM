// Write a program in C to replace the spaces in a string with a specific character.

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    char replaceChar;
    printf("Enter the character: ");
    scanf("%c", &replaceChar);

    for(int i=0; str[i]; i++)
    {
        if(str[i]==' ')
            str[i]=replaceChar;
    }
    printf("The replaced string is :%s\n", str);
    return 0;
}