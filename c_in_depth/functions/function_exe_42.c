//function prodDigits() that inputs a number and returns the product of digits of that number
#include<stdio.h>
int prodDigits(int num);
int main(){
    int num,x;
    printf("Enter the number : ");
    scanf("%d", &num);
    x=printf("%d", prodDigits(num));
    return 0;
}
int prodDigits(int num)
{
    int prod=1,rem;
    while(num>0)
    {
        rem=num%10;
        prod*=rem;
        num/=10;
    }
    return prod;
}