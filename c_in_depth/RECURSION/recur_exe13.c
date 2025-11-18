//Write a recursive function to input and add  numbers

#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("How many number sdo you want to add? ");
    scanf("%d", &n);
    printf("Sum=%d\n", sum(n));
    return 0;
}
int sum(int n)
{
    int x;
    if(n==0)
        return 0;
    printf("Enter a number : ");
    scanf("%d", &x);
    return x+sum(n-1);    
}