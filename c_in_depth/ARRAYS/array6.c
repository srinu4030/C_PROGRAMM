//Program to convert decimal number to a binary number
#include<stdio.h>
int main(){
    int i, j, arr[32];
    int num;
    printf("Enter the decimal number : ");
    scanf("%d", &num);
    i=0;
    while(num>0)
    {
        arr[i]=num%2;
        num/=2;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        printf("%d", arr[j]);
    }
    
    return 0;
}
