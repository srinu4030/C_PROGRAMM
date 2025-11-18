// Write a program in C to check whether a letter is lowercase or not.

/*#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z')
        printf("%c is lowercase letter.\n", ch);
    else
        printf("%c is not an lowercase letter .\n", ch);
    return 0;        
}*/

#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);

    if(islower(ch))
        printf("%c is lowercase letter.\n", ch);
    else
        printf("%c is not an lowercase letter .\n", ch);
    return 0;        
}