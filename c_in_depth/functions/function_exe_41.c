#include<stdio.h>
int cubeSum(int n);
int isArmstrong(int n);
int PrintArmstrong(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("cubesum=%d\n", cubeSum(n));
    if(isArmstrong(n))
        printf("%d is an Arsmstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);    
    PrintArmstrong(n);
    return 0;
}
int cubeSum(int n)
{
    int sum=0, r;
    while(n>0)
    {
        r=n%10;
        sum+=r*r*r;
        n/=10;
    }
    return sum;
}
int isArmstrong(int n)
{
    if(n==cubeSum(n))
    {
        return 1;
    }
    return 0;
}
int PrintArmstrong(int n)
{
    int i;
    printf("The Armstrong number upto %d are :\n", n);
    for(int i=1; i<=n; i++)
    {
        if(isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");
}