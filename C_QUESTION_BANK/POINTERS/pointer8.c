// Write a Program to print the value and address of  elements of an array using pointers notation.

#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *ptr=arr;
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Element\tAddress\t\tValue\n");

    for(int i=0; i<n; i++)
    {
        printf("%d\t%p\t%d\n", i, (ptr+i), *(ptr+i));
    }
    return 0;
}