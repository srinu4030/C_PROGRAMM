//the sum of squares of all odd numbers from 1 to 25
//functions with no arguments and a retuen value
#include<stdio.h>
int func(void);
int main(){
    printf("%d", func());
    return 0;
}
int func(void)
{
    int num, sum=0;
    for(num=1; num<=25; num++)
    {
        if(num%2!=0)
            sum+=num*num;
    }
    return sum;
}