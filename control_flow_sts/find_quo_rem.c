#include<stdio.h>
int main(){
    int x,y;
    int quo, rem;
    printf("Enter the two numbers:");
    scanf("%d %d", &x, &y);

    if(y)
    {
        quo=x/y;
        rem=x%y;
    }
    else
    {
        printf("Divide by zero will be getting an error\n");
    }

    printf("The quotient is : %d\n", quo);
    printf("The remainder is :%d\n", rem);
    return 0;


}