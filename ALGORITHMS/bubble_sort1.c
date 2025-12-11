// Bubble sort algorithm

#include<stdio.h>
void bubbleSort(int arr[], int n);
int main(){
    int n;
    printf("Enter the array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    return 0;
}
void bubbleSort(int arr[], int n){
    int temp;
    for(int i=0; i<n-1; i++){
        int swapped=0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0)
            break;
    }
    printf("The sorted array is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}