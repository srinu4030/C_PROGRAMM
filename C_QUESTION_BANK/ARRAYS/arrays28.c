//Write a program in C to find the majority element of an array.
// (A majority element in an array A[] of size n is an element that appears more than n/2 times 
//(and hence there is at most one such element).
#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size : ");
    scanf("%d", &n);

    printf("ENter the elements : \n");
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count=0, majority=-1;
    for(int i=0; i<n; i++)
    {
        count =0;
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
                count++;
        }

        if(count > n/2)
        {
            majority=arr[i];
            break;
        }
    }
    if(majority!=-1)
    {
        printf("The majority element in an array is %d\n", majority);
    }
    else
        printf("There is no majority element .\n");

}