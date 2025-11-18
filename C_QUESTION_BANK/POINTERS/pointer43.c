//Write a program to input elements in an array and sort array using pointers.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array  : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elemnts : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr=arr;
    
    for(int i=0; i<n; i++)
    {
        for (int j = i+1; j < n; j++)
        {   
            if(ptr[i]>ptr[j])
            {
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    printf("Sorted array is : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }
}