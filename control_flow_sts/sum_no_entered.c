#include<stdio.h>
int main(){
    int n, sum=0;
    do
    {
        printf("Enter the number:");
        scanf("%d", &n);
        sum=sum+n;
    } while (n !=0);
    printf("The sum of digits entereed is:%d", sum);
    return 0;
}