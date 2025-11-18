//Develop a function to reverse a string in place using pointers.

#include<stdio.h>
void reverseString(char *str);
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);

    reverseString(str);
    printf("The reversed string is :%s\n", str);

}
void reverseString(char *str)
{
    char *start=str;
    char *end=str;
    char temp;

    while(*(end+1)!='\0')
        *end++;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        *start++;
        *end--;
    }    
}