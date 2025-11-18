//Write a program in C to check whether a character is a Hexadecimal Digit or not.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);

    if((ch>='0' && ch<='9') || (ch>='A' && ch<='F') || (ch>='a' && ch<='f'))
        printf("%c is hexadecimal digit.\n", ch);
    else
        printf("%c is not an hexadecimal digit.\n",ch);
    return 0;        
    

}