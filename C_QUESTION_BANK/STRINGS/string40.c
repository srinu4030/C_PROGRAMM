/* Write a C program to replace each lowercase letter with the same uppercase letter of a 
given string.*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int n=strlen(str);

    for(int i=0; i<n; i++)
    {
        if(str[i]>'a' && str[i]<'z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("The replaced string is : %s", str);
    return 0;
}