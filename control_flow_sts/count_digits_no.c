/*#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter the number:");
    scanf("%d", &n);
    do
    {
        n/=10;
        count++;
    }
    while(n>0);
    
    printf("The number of digits in number is :%d", count);
    return 0;
    
}*/


#include<stdio.h>
int main(){
    int i, count=0;
    printf("Enter the number:");
    scanf("%d", &i);
    if (i==0)
    {
        count=1;
    }
    else
    {
        while(i>0)
        {
            i/=10;
            count++;
        }
    }
    printf("The number of digits count in a number is:%d\n", count);
    return 0;

}