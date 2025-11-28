/*Implement a program that checks if a number is less than 50 without using the less than 
operator.*/

#include<Stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    /*if(num<50)
    printf("The number is less than 50.\n");
    else
    printf("The number is greater thn 50.\n");*/

    if(num/50==0)
    printf("The number is less than 50.\n");
    else
    printf("The number is not less than 50.\n");
    return 0;

    /*int diff = n - 50;
    if ((diff ^ n) & 0x80000000)
    printf("Less than 50");
    else
    printf("Not less than 50");
                             */
}