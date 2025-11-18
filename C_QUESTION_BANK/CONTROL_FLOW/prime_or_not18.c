

#include<stdio.h>
int main(){
    int i=2, num, isPrime=1;
    printf("Enter the number:");
    scanf("%d", &num);

    if(num<=1)
    {
        isPrime=0;
    }
    else{
        //while(i*i<=num)
        while(i<=sqrt(num))
        //while(i<num)
        {
            if(num%i==0){
                isPrime=0;
                break;
            }
            i++;
        }
    }
    if(isPrime){
        printf("%d is a prime number\n", num);
    }
    else{
        printf("%d is not a prime number\n",num);
    }
}
