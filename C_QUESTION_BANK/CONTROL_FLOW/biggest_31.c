//using nesting if-else

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three number:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("the biggest number is %d", a);
        }
        else
        {
            printf("the biggest number is %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("the biggest number is %d",b);
        }
        else
        {
            printf("the biggest number is %d",c);
        }
    }
    return 0;
}