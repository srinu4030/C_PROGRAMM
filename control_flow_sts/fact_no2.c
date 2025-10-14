#include<stdio.h>
int main(){
    int n, num;
    long fact=1;
    printf("Enter the number:");
    scanf("%d", &n);
    num=n;

    if(n<0)
    {
        printf("No Factorial of negative numbers\n");
    }
    else
    {
        for(n; n>0; n--)
        //for(n=1; n<=num; ++n)
        {
            fact=fact*n;
        }
        printf("Factorial of number %d=%ld\n", num, fact);
    }
    return 0;
}