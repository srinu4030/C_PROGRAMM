//Program for input and ouput of strings using gets() and puts()

#include<stdio.h>
int main(){
    char str[10];
    printf("Enter a string : ");
    gets(str);
    printf("String is : ");
    puts(str);
    return 0;
}