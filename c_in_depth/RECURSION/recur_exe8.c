#include<stdio.h>
int count(int a);
int main(){
    printf("%d", count(17243)); //5
    return 0;
}
int count(int a)
{
    if(a==0)
        return 0;
    return 1+count(a/10);    
}