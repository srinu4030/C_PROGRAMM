#include<stdio.h>
int func(int a , int b);
int main(){
    printf("%d", func(4,8)); //30
    printf("%d", func(3,8)); //infinite recursion, program crash
    return 0;
}
int func(int a, int b)
{
    if(a==b)
        return a;
    return a+b+func(a+1, b-1);    
}
