//Write a program in C to copy the elements of one array into another array
#include<stdio.h>
int main(){
    int i,b[10];
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("The original elements are :\n");
    for(i=0; i<10; i++)
        printf("%d ", a[i]);
    for(i=0; i<10; i++)
        b[i]=a[i];
    printf("\nThe copied elements are :\n");     
    for(i=0; i<10; i++)
        printf("%d ", b[i]);    
}