// Write a program in C to find the second largest element in an array

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

    int largest=arr[0];
    int secondLargest=-35655;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]<largest)
            secondLargest=arr[i];
    }
    if(secondLargest==-35655)
        printf("There is no second largest element.\n");
    else
        printf("The seocnd largest element is %d\n", secondLargest);
}