/* Write a C program to count occurrences of a character in a given string.*/


#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    
    int count=0;
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character  : ");
    scanf(" %c", &ch);

    
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==ch)
        {
            count++;   
        }

    }
    printf("Count occurences of a character in a string is : %d\n", count);
    return 0;
}