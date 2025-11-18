//Program to input values into an array and display them

#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<5; i++)
    {
        printf("TEnter a value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are :");
    for(int i=0; i<5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}