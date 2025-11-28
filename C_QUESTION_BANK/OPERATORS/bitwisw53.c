/* Write a C program to rotate the bits of a given number to the left by a specified number of 
positions using bitwise operators*/

#include<stdio.h>
int main(){
    unsigned int num;
    int d;
    printf("Enter the number : ");
    scanf("%u", &num);
    printf("Enter the number of positions : ");
    scanf("%d", &d);

    unsigned int result=((num<<d ) | (num>>(31-d)));
    printf("Result after left rotate: %u\n", result);
    return 0;
    
}