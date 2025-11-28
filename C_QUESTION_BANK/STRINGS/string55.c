/*Write a C program to find the first occurrence of a character in a given string.*/


#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    char ch;
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character : ");
    scanf("%c", &ch);

    int found=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==ch)
        {
            printf("The first occurence of character  %c is at index %d\n", ch, i);
            found=1;
            break;
        }
    }
    if(!found)
        printf("The character is not found in the string .\n");
        return 0;


}