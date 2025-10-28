#include<stdio.h>
void evenorodd(int num);
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    evenorodd(num);
    evenorodd(5);
    evenorodd(0);
    evenorodd(-1);
    evenorodd(-2);
    return 0;
}
void evenorodd(int num)
{
    if(num%2==0)
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);    
}