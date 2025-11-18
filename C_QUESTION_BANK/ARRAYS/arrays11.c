//Write a program in C to sort elements of an array in ascending order

#include<stdio.h>
int main(){
    int n, temp, swapchange;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        swapchange=0;
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapchange++;
            }
        }
        if(swapchange == 0)
            break;
    }
    printf("Elements of an array in ascending order is  :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

}