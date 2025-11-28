/*Write a program to accept any number and print the value of remainder after dividing it by 3.*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    int remainder=n%3;

    printf("The raminder is : %d\n", remainder);
    return 0;



}