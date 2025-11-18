//Write a recursive function to find the sum of all even numbers in an array.

#include<stdio.h>
int sumEven(int arr[], int size);
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result=sumEven(arr, n);

    printf("Sum of all even numbers in an array is : %d\n", result);
    return 0;
}
int sumEven(int arr[], int size)
{
    if(size==0)
        return 0;
    if(arr[size-1]%2==0)
    {
        return arr[size-1]+sumEven(arr,size-1);
    }    
    else
        return sumEven(arr, size-1);
}