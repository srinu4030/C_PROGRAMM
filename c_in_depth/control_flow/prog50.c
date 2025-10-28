/*#include<stdio.h>
int main(){
    int num,digit,final=0;
    scanf("%d", &num);
    for( ; num>0; num=num/10)
    {
        digit=num%10;
        final=(final*10)+digit;
    }
    printf("The reversed number is: %d\n", final);
    printf("The double of reverse number: %d\n",  2*final);
}*/


#include<stdio.h>
int main(){
    int num, digit, start,reverse=0;

    scanf("%d", &num);
    start=num;
    while(num>0)
    {
        digit=num%10;
        reverse=(reverse*10)+digit;
        num/=10;
    }
    printf("The reversed number is: %d\n", reverse);
    printf("The double of the reversed number is : %d\n", reverse*2);
}