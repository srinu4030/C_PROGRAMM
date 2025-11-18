#include<stdio.h>
int main(){
    int i=2, num, isPrime=1;
    printf("Enter the number:");
    scanf("%d", &num);

    if(num<=1)
    {
        isPrime=0;
    }
    else
    {
        //for(i=2; i<num; i++)
        for(i=2; i*i<=num; i++)
        //for(i=2; i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime==1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
}
