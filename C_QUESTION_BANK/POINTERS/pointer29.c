// Write a program in C to calculate the length of a string using a pointer.

#include<stdio.h>
int astrlen(char *str);
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    int result=printf("Length is : %d\n", astrlen(str));
    return 0;
}
int astrlen(char *str)
{
    int i=0;
    while(*str!='\0')
    {
        str++;
        i++;
    }
    return i;
}