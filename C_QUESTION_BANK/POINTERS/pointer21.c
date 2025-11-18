// Implement a function that returns the length of a string using pointers

#include<stdio.h>
int stringLength(char *str);
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    printf("Length of a string is : %d\n", stringLength(str));
    return 0;
}
int stringLength(char *str)
{
    int count=0;
    while(*str !='\0')
    {
        count++;
        str++;
    }
    return count;
}