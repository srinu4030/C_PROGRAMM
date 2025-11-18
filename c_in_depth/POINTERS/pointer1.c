//Program to print the address of a variable with using the address operator(&)

#include<stdio.h>
int main(){
    int age=20;
    float salary=1000.50;
    printf("Addrees of age : %p\n", &age);
    printf("Address of salary : %p\n", &salary);
    return 0;
}