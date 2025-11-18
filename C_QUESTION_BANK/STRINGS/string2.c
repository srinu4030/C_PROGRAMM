// Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string :");
    scanf("%s", str);
    printf("The entered string is : ");
    printf("%s", str);

    int i=0;
    //while(str[i]!='\0')
    while(str[i])
    {
        i++;
    }
    printf("\nThe lenngth is : %d", i);
    return 0;
}