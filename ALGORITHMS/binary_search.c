//Binary Search Algorithm

#include<stdio.h>
int binarySearch(int arr[], int n, int key);
int  main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key element : ");
    scanf("%d", &key);
    int result=binarySearch(arr, n, key);
    if(result==-1)
        printf("Element is not found .\n");
    else
        printf("Element found at index %d\n", result);
    return 0;     
}
int binarySearch(int arr[], int n, int key){
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(key<arr[mid])
            high=mid-1;       // search left
        else
            low=mid+1;       //search right
    }
    return -1;
}