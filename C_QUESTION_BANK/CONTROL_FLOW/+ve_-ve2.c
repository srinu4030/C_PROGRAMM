// using ternary(conditional) operator

#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    (num>0)?printf("%d number is positive.\n",num):
    (num<0)?printf("%d number is negative.\n", num):printf("number is zero\n");

    return 0;
}