#include<stdio.h>
long int factorial(int num);
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d", &num);

    printf("factorial(1) = %ld\n", factorial(1));
    printf("factorial(-1) = %ld\n", factorial(-1));
    printf("factorial(0) = %ld\n", factorial(0));
    if(num<0)
        printf("No factorial for negative numbers\n");
    else
    {
        printf("The factorial of %d is %ld\n", num, factorial(num));
    }
    
      
}
long int factorial(int n)
{
    int i;
    int fact=1;
    if(n==0)
        return 1;
    for(int i=n; i>1; i--)
        fact=fact*i;
    return fact;        
}