//Program to add elements of an array
#include<stdio.h>
int main(){
    int arr[5];
    int sum=0;
    for(int i=0; i<5; i++)
    {
        printf("Enter a value for arr[%d] : ", i);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("Sum=%d\n", sum);
    return 0;
}