//Write a program in C to print all unique elements in an array

#include<stdio.h>
int main(){
    int i,j,arr[100];
    int n;
    int count=0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the elements : \n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("The unique elements are : \n");
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                count++;
                break;
            }
        }
    if(count==0)
    printf("%d ", arr[i]);
    }    
}