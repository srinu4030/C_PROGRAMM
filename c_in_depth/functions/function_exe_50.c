#include<stdio.h>
int product(int a, int b);
int quotient(int a, int b);
int remainder_val(int a, int b);
int main(){
    int a,b;
    printf("Enter the two numbers :");
    scanf("%d %d", &a, &b);
    printf("Product of two numbers = %d\n", product(a,b));
    printf("Quotient = %d\n", quotient(a,b));
    printf("Remainder = %d\n", remainder_val(a,b));
    return 0;
}
// Function to calculate product without using '*'
int product(int a , int b)
{
    int prod=0;
    for(int i=1; i<=b; i++)
        prod+=a;
    return prod;    
}
// Function to calculate quotient without using '/' operator
int quotient(int dividend, int divisor)
{
    int quotient=0;
    int sign=1;
    if(dividend<0)
    {
        dividend=-dividend;
        sign=-sign;
    }
    if(divisor<0)
    {
        divisor=-divisor;
        sign=-sign;
    }
    while(dividend>=divisor)
    {
        dividend-=divisor;
        quotient++;
    }
    return sign * quotient;
}
// Function to calculate remainder without using '%' operator
int remainder_val(int dividend, int divisor)
{
    int sign=1;
    if(dividend<0)
    {
        dividend=-dividend;
        sign=-1;
    }
    if(divisor<0)
    {
        divisor=-divisor;
        sign=-1;
    }
    while(dividend>=divisor)
    {
        dividend-=divisor;
    }
    return sign* dividend;
}