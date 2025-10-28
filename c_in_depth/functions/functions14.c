//program to find the sum of numbers in a number
//functions with arguments and return value

#include<stdio.h>
int sumOfdigits(int num);
int main(){
    int num,sum;
    printf("Enter the numer:");
    scanf("%d", &num);
    sum=sumOfdigits(num);
    printf("The sum of digits of a number is :%d", sum);
    return 0;
}
int sumOfdigits(int num)
{
    int digit,sum=0;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num/=10;
    }
    return sum;
}