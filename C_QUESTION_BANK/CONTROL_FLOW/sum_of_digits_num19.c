#include<stdio.h>
int main(){
    int num, digit,sum=0;
    printf("Enter the number:");
    scanf("%d", &num);
    //for(num; num!=0; num/=10)
    while(num!=0)
    {
       
        digit= num%10;
        sum=sum+digit;
        num=num/10;

    }
    printf("The sum of digits is %d\n", sum);
}
