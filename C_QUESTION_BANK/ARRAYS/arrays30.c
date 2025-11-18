//Write a program in C to find the two repeating elements in a given array

#include<stdio.h>
int main(){
    int n;
    int count =0;
    printf("Enter the array size (n+2) : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Printing the repeating elements : \n");
    for(int i=0; i<n;  i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j]){
                printf("%d ", arr[i]);
                count++;
                break;
            }
        }
        if(count == 2)
            break;
    }
    return 0;
}