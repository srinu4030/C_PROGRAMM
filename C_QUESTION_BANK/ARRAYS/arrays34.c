// Implement a function to reverse the elements of an array.


#include<stdio.h>
void reverseArray(int *arr, int n);
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elemets : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n);
    printf("The reversed elements are : \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void reverseArray(int *arr, int n)
{
    int start=0, end=n-1, temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp; 

        start++;
        end--;
    }
}