#include<stdio.h>
void func1(int a, int b);
void func2(int a, int b);
int main(){
    func1(10,18);
    printf("\n");
    func2(10,18);
    return 0;
}

void func1(int a, int b)
{
    if(a>b)
        return ;
    printf("%d ", a);  //10 11 12 13 14 15 16 17 18  
    func1(a+1, b);    
}
void func2(int a, int b)
{
    if(a>b)
        return;
    func2(a+1,b);
    printf("%d ", a);  //18 17 16 15 14 13 12 11 10 
}