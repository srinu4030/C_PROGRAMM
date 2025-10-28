#include<stdio.h>
int main(){
    int num, digit, count=0, rem;

    printf("Enter the number:");
    scanf("%d", &num);

    printf("Enter the digit:");
    scanf("%d", &digit);

    int temp=num;

    while(temp>0)
    {
        rem=temp%10;
        if(rem==digit)
        {
            count++;
        }
        temp=temp/10;
    }
    printf("The Number of digits in a number is: %d", count);
}