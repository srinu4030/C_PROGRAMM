// Write a program to print postfix/prefix increment/decrement in a pointer variable of base type int*.

#include<stdio.h>
int main(){
    int a=10;
    int *ptr;
    ptr=&a;

    printf("The value of p=address of a=%p\n", ptr);
    printf("%p\n", ++ptr);
    printf("%p\n", ptr++);
    printf("%p\n",ptr);
    printf("%p\n", --ptr);
    printf("%p\n", ptr--);
    printf("%p\n", ptr);

    printf("%d\n", *ptr);


}