#include<stdio.h>
char toUpperCase(char ch);
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    char result=toUpperCase(ch);
    printf("Result=%c\n", result);
    return 0;
}
//function to convert lowercase to uppercase
char toUpperCase(char ch)
{
    if(ch>='a' && ch<='z')
        ch=ch-('a'-'A');
    return ch;    
}