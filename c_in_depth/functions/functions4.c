#include<stdio.h>
int sum(int a, int b);
int main(){
    int a=10,b=20;
    int s;
    s=sum(a,b);
    printf("%d\n", s);
    s=sum(4,5);
    printf("%d\n", s);
    s=sum(a+b, b*2);
    printf("%d\n", s);
    return 0;  
}
int sum(int x, int y)
{
    int s;
    s=x+y;
    return s;
}