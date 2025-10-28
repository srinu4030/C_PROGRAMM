//write a function() that input a number and prints the multiplication table of that number
#include<stdio.h>
int mul(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    mul(n);
    return 0;
}
int mul(int n)
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%dx%d=%d\n",n,i, n*i);
    }
}