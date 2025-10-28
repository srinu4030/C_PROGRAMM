//reverse a number

#include<stdio.h>
int reverse_no(int num);
int main(){
    int num;
    int rev;
    printf("Enter the number :");
    scanf("%d", &num);
    rev=reverse_no(num);
    printf("The revseres number is: %d", rev);
    return 0;
}
int reverse_no(int num)
{
    int digit, rev=0;
    while(num>0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num/=10;
    }
    return rev;
}