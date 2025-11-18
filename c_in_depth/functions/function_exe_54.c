//twin primes
#include<stdio.h>
#include<math.h>
int isPrime(int n);
int main(){
    int i;
    for(int i=2; i<=1000; i++)
    {
        if(isPrime(i) && isPrime(i+2))
            printf("(%d,%d) ", i,i+2);
    }
    return 0;
}
int isPrime(int n)
{
    
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n); i++)
    {    
        if(n%i==0)
            return 0; 
    }
    return 1;
           
}