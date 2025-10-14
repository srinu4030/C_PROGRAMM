
/* to check the equal or not using the bitwise operators*/
#include<stdio.h>
int main()
{   
    int a,b;
    printf("enter the number:");
    scanf("%d %d", &a ,&b);
    if (a^b)
    {
        printf("a and b are not equal\n");
    }
    else
    {
        printf("a and b are equal\n");
    }
}