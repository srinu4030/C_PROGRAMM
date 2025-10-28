#include<stdio.h>
int largest(int x, int y);
int main(){
    //int x=10, y=20;
    int x,y;
    printf("Enter the numbers:");
    scanf("%d %d", &x, &y);
    int z;
    z=largest(x,y);
    printf("largest is : %d",z);
}
int largest(int a, int b)
{
    int z;
    z=a>b?a:b;
    return z;
}