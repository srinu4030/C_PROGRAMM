// Write a program in C to read n number of values in an array and display them in reverse order.

#include<stdio.h>
int main(){
    int arr[100];
    int i, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array elements in reverse order :\n");
    for(i=n-1; i>=0; i--)
        printf("%d ", arr[i]);
    return 0;    
}


/*
#include<stdio.h>
int main(){
    int i,j,temp;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0,j=9; i<j; i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("After reversing ellemnts:\n");
    for(i=0; i<10; i++)
    {
        printf("%d\n",arr[i]);
    }
}*/