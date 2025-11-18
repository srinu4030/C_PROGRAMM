#include<stdio.h>
int sumProperDivisors(int num);
int isPrime(int num);
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    if(isPrime(num))
    {
        printf("%d is a prime number.\n",num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
int sumProperDivisors(int num)
{
    int sum=0,i;
    for(int i=1; i<=num/2; i++)
    {
        if(num%i==0)
            sum+=i;
    }
    return sum;
}
int isPrime(int num)
{
    return (num>1 && sumProperDivisors(num)==1);
}
