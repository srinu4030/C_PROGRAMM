// Logic to search an element in an array using pointers.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter the element : ");
    scanf("%d", &element);
    int *ptr;
    ptr=arr;
    int found=0;
    for(int i=0; i<n; i++)
    {
        if(*(ptr+i)==element)
        {
            printf("Element %d found at position %d\n", element, i + 1);
            found=1;
            break;
        }
    }
    if(!found)
        printf("Element %d not found in the array.\n", element);
    return 0;      
}