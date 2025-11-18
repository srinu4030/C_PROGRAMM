// Write a program to print the value of array elements  using pointers and subscript notation.

#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *ptr=arr;
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Index\tSubscript Notation\t Pointer Notation\n");

    for(int i=0; i<n; i++)
    {
        printf("%d\t\t%d\t\t\t%d\t\t\n", i,arr[i], *(ptr+i));
        //printf("%d\t\t%d\t\t%d\t\t\n", i,i[arr], i[ptr]);
    }
    
}