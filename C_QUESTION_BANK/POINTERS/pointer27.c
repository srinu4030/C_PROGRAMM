//Develop a function to reverse an array of integers in place using pointers.

#include<stdio.h>
void reverseArr(int *arr, int n);
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    //int *ptr;
    //ptr=arr;

    reverseArr(arr,n);
    printf("The reversed array is : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void reverseArr(int *arr, int n)
{
    int temp;
    int *start=arr;
    int *end=arr+n-1;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }

}