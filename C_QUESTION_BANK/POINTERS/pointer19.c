// Write a program to pass a 1D array to a function.

#include<stdio.h>
int display(int *arr, int size);
int main()
{
    int arr[5]={10,20,30,40,50};
    int n=5;

    display(arr,n);
}

int display(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        //printf("%d ", arr[i]); //subscript notation
        printf("%d ", *(arr+i)); //pointer notation
    }
}