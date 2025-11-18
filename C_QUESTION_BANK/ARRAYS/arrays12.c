//Write a program in C to sort elements of an array in descending order

#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : \n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(int i=0; i<n; i++)
    {
        int swapchange=0;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapchange++;
            }
        }
        if(swapchange==0)
            break;
    }
    printf("The array elements in descending order is : \n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

}