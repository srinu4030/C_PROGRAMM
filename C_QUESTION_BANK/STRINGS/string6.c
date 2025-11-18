//Write a program in C to compare two strings without using string library functions.

#include<stdio.h>
int compareString(char*str1, char*str2);
int main(){
    char str1[10]="Aangalore";
    char str2[10]="Bangalore";

   int result= compareString(str1,str2);
   if(result==0)
        printf("Both strings are equal.\n");
   else if(result>0)  
        printf("First string is greater.\n");
   else
        printf("Second string is greater.\n");
   return 0;             

   
}
int compareString(char*str1, char*str2)
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