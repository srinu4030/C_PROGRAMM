/* Write a program to accept a number in decimal and print the number in octal and 
hexadecimal.*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number in decimal : ");
    scanf("%d", &n);

    printf("The octal number is :  O%o\n", n);
    printf("The hexadecimal number is :0x%x\n", n);
    return 0;
}