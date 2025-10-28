/*#include<stdio.h>
int main(){
    int num, digit, start, final=0;
    

    printf("enter the number: ");
    scanf("%d", &num);
    start=num;

    for(; num>0; num/=10)
    {
        digit=num%10;
        final=(final*10)+digit;
    }
    printf("The final Number is : %d\n", final);

    if(start==final)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
}
*/

#include<stdio.h>
int main(){
    int num, digit, start, final=0;
    

    printf("enter the number: ");
    scanf("%d", &num);
    start=num;

    while(num>0)
    {
        digit=num%10;
        final=(final*10)+digit;
        num/=10;
    }
    printf("The final Number is : %d\n", final);

    if(start==final)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
}

