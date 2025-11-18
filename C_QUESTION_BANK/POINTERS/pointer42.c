// write a program to concatenate two strings using pointers

#include<stdio.h>
char* concatenate( char *str1, char *str2);
int main(){
    char str1[20]="Bare";
    char str2[6]="Metal";
    char *temp=concatenate(str1, str2);
    printf("Concatenated string is : %s\n", temp);
    return 0;
}
char* concatenate( char *str1, char *str2)
{
    char *temp=str1;
    while(*str1 !='\0'){
        str1++;
    }
    while (*str2 != '\0')
    {
        *str1=*str2;
        str1++;
        str2++;
    }

    *str1='\0';
    return temp;
}