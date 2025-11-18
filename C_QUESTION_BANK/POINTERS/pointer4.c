// Write a program to illustrate the dereferencing of pointers.

#include<stdio.h>
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    printf("The value of a : %d\n", a);
    printf("Value pointed by ptr (*ptr): %d\n", *ptr);
    printf("The address of a :%p\n",&a);
    printf("The address in ptr : %p\n", ptr);

    *ptr=25;
    printf("\nAfter modifying through pointer:\n");
    printf("New value of a  : %d\n", a);
    printf("Value through *ptr : %d\n", *ptr);

    
    printf("after modifying The address of a :%p\n",&a);
    printf("after modifying The address in ptr : %p\n", ptr);

}