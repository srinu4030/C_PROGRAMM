/*Write a C program that uses the bitwise  operators to check if a given positive integer is 
divisible by both 6 and 9*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    // Check divisibility:
    // divisible by 6 → divisible by 2 AND divisible by 3
    // divisible by 9 → divisible by 9
    // so divisible by both 6 and 9 → divisible by 18


    if((num&1)==0 &&  num%9 == 0)
    printf("The number %d is divisible by 6 and 9.\n",num);
    else
    printf("The number is not divisible by 6 and 9.\n");
    return 0;
}