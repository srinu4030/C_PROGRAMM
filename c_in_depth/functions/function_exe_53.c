//sum of series upto n terms
#include<stdio.h>
double seriesSum(int n);
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    double result=seriesSum(n);
    printf("Sum of  the series up to %d terms = %.6f\n", n,result);
    return 0;
}
double seriesSum(int n)
{
    double sum=0.0;
    for(int i=1; i<=n; i++)
        sum+=1.0/(i*i);
    return sum;    
}