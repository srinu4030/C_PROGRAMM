//Write a program in C to print individual characters of a string in reverse order.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    char str[n];
    printf("Enetr the string : ");
    scanf("%s", str);
    //gets(str);
    printf("Entered string is : %s\n", str);

    printf("The individual characters are : ");
    for(int i=0; str[i]!='\0'; i++)
    {
        printf("%c ", str[i]);
    }

    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    printf("\nlength of string is  : %d", length);
    printf("\nThe reverse order is : ");
    for(int i=length-1; i>=0; i--)
    {
        printf("%c ", str[i]);
    }
    return 0;    
}