//Write a program that calculates the sum of all elements in an integer array using pointer arithmetic.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr;
    ptr=arr;
    //ptr=&arr[0];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=*(ptr+i); //pointer notation
        //sum+=ptr[i]; //subscript(array) notation
    }
    printf("Sum is %d\n", sum);
    return 0;
}