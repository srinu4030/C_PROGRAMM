// Write a Program to print the address of variables using the address operator.

#include<stdio.h>
int main(){
    int a=10;
    float b=23.5;
    char c='A';

    printf("Address of an integer variable is : %p\n", &a);
    printf("Address of float variable is  :%p\n", &b);
    printf("Address of the character variable is : %p\n", &c);
    return 0;
}