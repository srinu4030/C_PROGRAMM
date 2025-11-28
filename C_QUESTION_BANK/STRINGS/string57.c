/*Write a C program to search all occurrences of a character in a given string.*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    int found=0;
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character  : ");
    scanf(" %c", &ch);

    printf("Occurrences of '%c' found at positions: ", ch);
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==ch)
        {
            printf("%d ", i);
            found=1;
        }

    }
    if(!found)
    {
        printf("Character is not found.\n");
    }
    return 0;
}