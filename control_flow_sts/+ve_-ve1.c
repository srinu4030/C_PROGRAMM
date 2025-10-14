//using if-else

#include<stdio.h>
int main(){
    int num;
    int flag=0;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d number is positive.\n", num);
    }
    else if(num<0)
    {
        printf("%d number is negative.\n", num);
        num=-num;
        flag=1;

    }
    else
    {
        printf("number is zero.\n");
    }

    if(flag==1)
    {
        printf("The changed value is: %d\n", num);
    }
    return 0;

}