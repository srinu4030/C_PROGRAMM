#include<stdio.h>
#include<math.h>
int isPrime(int num);
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if(isPrime(num))
        printf("Number is Prime\n");
    else
        printf("Number is not prime\n");
    return 0;        
}
int isPrime(int num)
{
    int i;
    if(num<2)
        return 0;
    for(i=2; i<=sqrt(num); i++)
        if(num%i==0)
            return 0;
    return 1;         
}