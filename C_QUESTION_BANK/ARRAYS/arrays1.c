// Write a program in C to store elements in an array and print them
#include<stdio.h>
int main(){
    int i; 
    int arr[10];
    printf("Enter the elements : \n");
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);
    printf("The array elements are  : \n");     
    for(i=0; i<10; i++)
        printf("%d ",arr[i]);
    return 0;        

}