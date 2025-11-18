#include<stdio.h>
int main(){
    int n, num;
    long fact=1;
    printf("Enter the number:");
    scanf("%d", &n);
    num=n;


    if(n<0)
    {
        printf("No factorial of negative number\n");
    }
    else
    {
        while(n>0)
        {
            fact=fact*n;
            n--;
        }
        printf("Factorial of Number %d = %ld\n", num, fact);
    }
    return 0;

}
