//Write a program to check if a given element is present in an array.

#include<stdio.h>
int main(){
    int n, found=0;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key element : ");
    scanf("%d", &key);

    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            found=1;
            break;
        }
    }

    if(found==1)
    {
        printf("Yes, Element %d is present in the array.\n", key);
    }
    else
        printf("No, Element %d is not present in the array.\n", key);
    return 0;    
}