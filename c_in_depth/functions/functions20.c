#include<stdio.h>
#include<math.h>
int printPrimes(int num1, int num2);
int isPrime(int n);
int main(){
    int num1, num2;
    printf("Enter the numbers : ");
    scanf("%d %d", &num1, &num2);
    printPrimes(num1, num2);
    return 0;
}
int printPrimes(int num1, int num2)
{
    int i, count=0;
    for(int i=num1; i<=num2; i++)
        if(isPrime(i))
        {    
            printf("%d ", i);
            count++;
        }
    printf("\nCount=%d",count);    
}
int isPrime(int n)
{
    int i;
    for(i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;        
}
