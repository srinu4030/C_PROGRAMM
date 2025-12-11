//Move all zeros to the end

#include<stdio.h>
void moveZerosToEnd(int arr[], int n);
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
    moveZerosToEnd(arr, n);
    printf("After moving zeros to end : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void moveZerosToEnd(int arr[], int n)
{
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
}