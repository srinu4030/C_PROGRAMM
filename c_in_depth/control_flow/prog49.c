/*#include<stdio.h>
int main(){
    int n,flag=1;
    scanf("%d", &n);
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag=0;
            printf("n is not a prime number");
            break;
        }
    }
    if(flag==1)
        printf("Prime no");
    else
        printf("Not prime");    
}*/


#include<stdio.h>
//#include<math.h>
int main(){
    int i, num,count;
    for(num=2; num<=99; num++)
    {
        count=0;
        for(i=2; i<=num; i++)
        //for(i=2; i<=num/2; i++)
        //for(i=2; i<=sqrt(n); i++)
        {
            if(num%i==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
            printf("%d\t", num);
    }
}


