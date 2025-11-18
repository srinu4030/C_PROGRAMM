#include<stdio.h>
int sumProperDivisors(int n);
int main(){
    int num1, num2;
    printf("Enter the two number :");
    scanf("%d %d", &num1, &num2);
    int sum1=sumProperDivisors(num1);
    int sum2=sumProperDivisors(num2);
    if(sum1==num2 && sum2 ==num1 && num1 != num2)
    {
        printf("%d and %d are Amicable numbers\n", num1, num2);
    }
    else
    {
        printf("%d and %d are not Amicable numbers\n", num1, num2);
    }
    return 0;
}
int sumProperDivisors(int n)
{
    int sum=0;
    for(int i=1; i<=n/2; i++)
    {
        if(n%i==0)
            sum+=i;
    }
    return sum;
}