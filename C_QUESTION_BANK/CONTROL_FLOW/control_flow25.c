//WRITE A C PROGRAM TO FIND THE SUM OF ELEMENTS IN AN ARRAY USING A WHILE LOOP?

#include<stdio.h>
int main(){
    int n;
    int arr[n];
    int sum=0;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("The sum of array elements is :  %d\n",sum);
    return 0;
    
}