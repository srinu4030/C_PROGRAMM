// Write a program to compare two strings lexicographically (like the strcmp function) using pointers.

#include<stdio.h>
int astrcmp(char *str1, char *str2);
int main(){
    char str1[10]="Linux";
    char str2[10]="Linux";

    int result= astrcmp(str1, str2);
    if(result==0)
        printf("Both strings are equal \n");
    else if (result>0)
        printf("First string is greater\n");
    else
        printf("Second string is greater\n");       
    return 0;    
}
int astrcmp(char *str1, char *str2)
{
    while(*str1==*str2)
    {
        if(*str1=='\0')
        {
            break;
        }
        str1++;
        str2++;
    }
    return *str1-*str2;
}