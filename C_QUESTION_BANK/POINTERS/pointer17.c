/*// Write a simple program for call by reference.

#include<stdio.h>
void display(int *a);
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
        display(&arr[i]);
    printf("Array after function calls (chnaged) : \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void display(int *a)
{
   *a=*a+5;
    printf("Inside function (after adding 5) :%d\n", *a);
}*/

//passing an entire address
#include<stdio.h>
void display(int *a,int n);
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);

    printf("\nafter: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void display(int *a, int n)
{
    printf("before: \n");
    for(int i=0; i<n; i++)
    {
        a[i]=a[i]+5;
        printf("%d ", a[i]);
    }
}