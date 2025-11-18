//program to write a singe function to print both amicable pairs and perfect numbers
#include<stdio.h>
int sumProperDivisors(int n);
int findNumbersInRange(int start, int end);
int main(){
    int start, end;
    printf("Enter the range(start end) : ");
    scanf("%d %d", &start, &end);
    findNumbersInRange(start, end);
    return 0;
}
int sumProperDivisors(int n)
{
    int sum=0;
    for(int i=1; i<=n/2; i++)
    {   
        if(n%i==0)
            sum+=i;
    }
    return sum;
}
int findNumbersInRange(int start, int end)
{
    int i,j;
    printf("Perfect numbers between %d and %d :\n",start,end);
    for(i=start;i<=end;i++)
    {
        if(sumProperDivisors(i)==i)
            printf("%d\n", i);
    }
    printf("\nAmicable pairs between %d and %d :\n", start, end);
    for(i=start; i<=end; i++)
    {
        j=sumProperDivisors(i);
        if(j>i && j<=end && sumProperDivisors(j)==i)
            printf("%d %d\n", i,j);
    }
}
