//Write a program in C to find the missing number in a given array. There are no duplicates in the list.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements : ");
    for(int i=0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //calculate the sum of array
    int sum_array=0;
    for(int i=0; i<n; i++)
    {
        sum_array+=arr[i];
    }
    printf("The sum of array is : %d\n", sum_array);

    //calculate the total sum
    int total=(n+1)*(n+2)/2;
    // the missing number
    int missing =total-sum_array;

    printf("The missing element in an array is %d\n", missing);


}