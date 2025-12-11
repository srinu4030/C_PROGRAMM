//Insertion Sort Algorithm

#include<stdio.h>
void insertionSort(int arr[], int n);
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);
    printf("The sorted array is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
void insertionSort(int arr[], int n){
    int temp;
    for(int i=1; i<n; i++){
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
