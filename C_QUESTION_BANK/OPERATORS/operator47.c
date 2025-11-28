/* Implement a program to check if a number is even or odd using the modulus operator.*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(num%2==0)
        printf("The number is EVEn.\n");
    else
        printf("The number is ODD.\n");
    return 0;        
}