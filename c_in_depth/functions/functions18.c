//reverse a number and checking whether  the reversed number is palindrome or not with original number 

#include<stdio.h>
int reverse(long int n);
int isPlaindrome(long int num);
int main(){
    int num;
    printf("Enter the number :");
    scanf("%ld",&num);
    if(isPlaindrome(num))
        printf("Number is palindrome\n");
    else
        printf("Number is not palindrome\n"); 
    return 0;       
}
int isPlaindrome(long int num)
{
    if(num==reverse(num))
        return 1;
    return 0;    
}
int reverse(long int n)
{
    long int rev=0;
    int digit;
    while(n>0)
    {
        digit=n%10;
        rev=(rev*10)+digit;
        n/=10;
    }
    return rev;
}