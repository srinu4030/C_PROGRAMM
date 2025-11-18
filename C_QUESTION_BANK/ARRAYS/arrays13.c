//Write a program in C to delete an element at a desired position from an array.

#include<stdio.h>
int main(){
    int n,pos;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    printf("Enter the position from(1 to %d) :\n", n);
    scanf("%d", &pos);
    int arr[n];
    printf("Enter the elements : \n");
    for(int i=0; i<n;  i++)
        scanf("%d", &arr[i]);

    if(pos<1 || pos>n)
        printf("inavlid postion , Delition is not possible.\n");
    for(int i=pos-1; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }    
    n--;

    printf("The array after deletion : \n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
}