//C Program to Print all Non Repeated Elements in an Array

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array  : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements  : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Non Repeated elements are : \n");
    for(int i=0; i<n; i++)
    {
        int count =0;
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count ==1)
            printf("%d ", arr[i]);
    }
    return 0;
}