//Selection sort algorithm
/*Selection Sort is a simple comparison–based sorting algorithm.
It sorts an array by repeatedly finding the smallest element from the unsorted part and placing it at the beginning.*/

#include<stdio.h>
void selectionSort(int arr[], int n);
int main(){
    int arr[]={10,2,45,65,32,12,56,34,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("The sorted array is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}