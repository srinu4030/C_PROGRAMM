//Program to pass array elements to a function
#include<stdio.h>
int checkNum(int n);
int main(){
    int i,arr[10];
    printf("Enter the array elements : \n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        checkNum(arr[i]);
    }
    return 0;
}
int checkNum(int n)
{
    if(n %2==0)
        printf("%d is an even\n", n);
    else
        printf("%d is an odd\n", n);    
}