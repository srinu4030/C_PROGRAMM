#include<stdio.h>
int func1(int a, int b);
int func2(int a, int b);
int main(){
    printf("%d %d\n", func1(3,8), func2(3,8));
    return 0;
}
int func1(int a, int b)
{
    if(a>b)
    {
        return 0;
    }
    return b+func1(a, b-1); //7 stack frames created
}
int func2(int a, int b)
{
    if(a>b)
        return 0;
    return a+func2(a+1,b);    // 7 stack frames created
}