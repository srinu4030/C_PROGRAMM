#include<stdio.h>
int sum(int a, int b)
{
    int s;
    s=a+b;
    return s;
}
int main(){
    int a,b;
    int s;
    printf("Enter the two numbers:");
    scanf("%d %d", &a, &b);
    s=sum(a,b);
    printf("%d", s);
    return 0;
    
}