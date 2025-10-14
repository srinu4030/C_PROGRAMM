
/* to check the equal or not using the bitwise and logical operators*/
#include<stdio.h>
int main()
{   
    int a,b;
    printf("enter the number:");
    scanf("%d %d", &a ,&b);
    if ((a & ~b)==0 && (~a & b)==0)
    
        printf("a and b are equal\n");
    
    else
    {
        printf("a and b are not equal.\n");
    }
}