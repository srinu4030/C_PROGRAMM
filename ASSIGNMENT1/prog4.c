//PROGRAM TO PRINT HELLO WITHOUT USING GOTO OR LOOP STATEMENT

#include<stdio.h>
void func(int a);
int main(){
    int a;
    func(5);
}
void func(int a)
{
    if(a==5)
    {
        printf("Hello");
    }
}