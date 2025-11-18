//Write a  simple program for call by value.

#include<stdio.h>
int display(int a);
int main(){
    int n;
    printf("Enter the array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("The array elemnts are : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        display(arr[i]);
    }
    printf("\nArray after function calls (unchanged):\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

int display(int a)
{
    a=a+5;
    printf("Inside function (after adding 5): %d\n", a);
}