// Write a program to declare an integer variable a, assign it a value, then declare a pointer 
//variable, assign it the address of a, and finally print the value of a using the pointer variable

#include<stdio.h>
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    printf("The value of a :%d\n", a);
    printf("The value using *ptr :%d\n", *ptr);
    return 0;
}