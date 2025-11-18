// Write a program in C to convert a string to uppercase.

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-('a'-'A');
        }
    }
    printf("The upper case string is : %s\n", str);
    return 0;
}