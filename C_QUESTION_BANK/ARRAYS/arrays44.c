//44. Write a program to check if elements of an array are distinct or not.

#include<stdio.h>
int main(){
    int n;
    printf("ENter the size of an array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int distinct=1;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                distinct=0;
                break;
            }
        }
        if(!distinct)
            break;
    }
    if(distinct)
    {
        printf("Array elements are distinct.\n");
    }
    else
    {
        printf("Not distinct.\n");
    }
}