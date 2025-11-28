/*Write a C program to find the last occurrence of a character in a given string.*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    printf("Enter the string : ");
    scanf("%s", str);
    printf("Enter the character : ");
    scanf(" %c", &ch);

    int lastIndex=-1;

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==ch)
            lastIndex=i;
    }
    if(lastIndex==-1)
        printf("The character is not in the list.\n");
    else
        printf("The last occurence of %c is at index %d\n", ch, lastIndex);   
    return 0;    
}