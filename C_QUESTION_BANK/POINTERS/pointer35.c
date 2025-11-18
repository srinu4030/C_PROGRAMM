//Write a program  to compute the sum of all elements in an array using pointers

#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements :");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr=arr;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=*(ptr+i);
    }
    printf("The sum of array elements is : %d", sum);
    return 0;
}