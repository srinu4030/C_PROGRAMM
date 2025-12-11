//.WRITE A PROGRAM IN C TO SORT AN ARRAY OF INTEGERS IN DESCENDING ORDER USING LOOPS AND IF-ELSE STATEMENTS?

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
    printf("The sorted array is : ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}