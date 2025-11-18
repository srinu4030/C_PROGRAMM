//Write a program in C to find the second smallest element in an array

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest=arr[0];
    int secondSmallest=35655;
    for(int i=1; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            secondSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondSmallest&& arr[i]>smallest)
            secondSmallest=arr[i];
    }
    if(secondSmallest==35655)
        printf("There is no second largest element.\n");
    else
        printf("The seocnd largest element is %d\n", secondSmallest);

    printf("first smallest is : %d", smallest);    
}