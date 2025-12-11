//WRITE A C PROGRAM TO FIND THE SMALLEST ELEMENT IN AN ARRAY USING A WHILE LOOP?

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int smallest=arr[0];
    int i=1;
    while(i<n){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        i++;
    }
    printf("The smallest element in an array is :  %d\n", smallest);
    return 0;
}