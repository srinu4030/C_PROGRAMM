#include<stdio.h>
int prodDigits(int n);
int MDR(int n);
int Mpersistence(int n);
int main()
{
    int n;
    printf("Enter he number : ");
    scanf("%d", &n);
    printf("product of the each digit in a number is %d \n", prodDigits(n));
    printf("Multiplicative digital root is %d \n", MDR(n));
    printf("Multiplicative persistence of the number is %d\n", Mpersistence(n));
    return 0;
}
int prodDigits(int n)
{
    int prod=1, rem;
    while(n>0)
    {
        rem=n%10;
        prod*=rem;
        n/=10;
    }
    return prod;
}
int MDR(int n)
{
    while (n>=10)
    {
        n=prodDigits(n);
    }
    return n;
}
int Mpersistence( int n)
{
    int count=0;
    while(n>=10)
    {

        n=prodDigits(n);
        count++;
    }
    return count;
}
