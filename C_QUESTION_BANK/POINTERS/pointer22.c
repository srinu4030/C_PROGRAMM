// Write a program to find the maximum and minimum elements in an array using pointers.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *p;
    p=arr;
    int max, min;
    max=min=*p;

    for(int i=1; i<n; i++)
    {
        p++;
        if(*p>max)
            max=*p;
        if(*p<min)
            min=*p;    
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;

}