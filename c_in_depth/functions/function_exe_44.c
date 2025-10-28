#include<stdio.h>
int sumProperDivisors(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The sum of proper divisiors of %d is %d",  n, sumProperDivisors(n));
    return 0;
}
int sumProperDivisors(int n)
{
    int sum=0;
    for(int i=1; i<=n/2; i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}