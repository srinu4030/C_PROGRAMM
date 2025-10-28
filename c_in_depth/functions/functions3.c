#include<stdio.h>
int sum(int a, int b);
int main(){
    int a=10; int b=20;
    int s;
    s=sum(a,b);
    printf("Sum is %d", s);
    return 0;
}
int sum(int x, int y)
{
    int s;
    s=x+y;
    return s;
}