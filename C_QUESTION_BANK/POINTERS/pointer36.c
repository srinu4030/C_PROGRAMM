// Write a program  to print the elements of an array in reverse order.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr;
    ptr=arr;
    printf("The reversed order is : ");
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", *(ptr+i));
    }
    return 0;

}