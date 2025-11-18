// Write a program in C to find the sum of all elements of the array.

#include<stdio.h>
int main(){
    int i;
    int sum=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0; i<10; i++)
        sum+=arr[i];
    printf("Sum is = %d\n", sum);
    return 0;    
}