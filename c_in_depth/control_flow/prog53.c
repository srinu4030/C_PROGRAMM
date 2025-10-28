#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter the number:");
    scanf("%d", &n);
    int temp=n;
    while(temp>0 || count==0)
    {
        n/=10;
        count++;
    }
    printf("Count=%d",count);
}