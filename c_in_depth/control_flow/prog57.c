#include<stdio.h>
int main(){
    int x,y;
    long long power =1;
    printf("Enter the base:");
    scanf("%d", &x);

    printf("Enter the power:");
    scanf("%d", &y);

    for(int i=1; i<=y; i++)
    {
        power=i*x;
    }

    printf("%d raised to the power of %d is %lld", x,y,power);
}