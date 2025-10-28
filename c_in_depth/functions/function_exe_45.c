#include <stdio.h>

int sumProperDivisors(int n);

int main()
{
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Perfect numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++)
    {
        if (i == sumProperDivisors(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

int sumProperDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}






/*#include<stdio.h>
int sumProperDivisors(int n);
int perfectNum(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The sum of proper divisiors of %d is %d\n",  n, sumProperDivisors(n));
    perfectNum(n);
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
int perfectNum(int n)
{
    if(n==sumProperDivisors(n))
    {
        printf("Yes, %d is a perfect number\n", n);
    }
}
*/
