//Write a program to remove duplicate elements from a sorted array.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array  : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int j=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    printf("Array after removing duplicates: \n");  
    for(int i=0; i<=j ; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}