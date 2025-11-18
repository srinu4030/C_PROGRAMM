#include<stdio.h>
int func(int n);
int main(){
    printf("%d\n", func(14837));  //23
    return 0;
}
int func(int n)
{
    return (n)?n%10+func(n/10):0;
}