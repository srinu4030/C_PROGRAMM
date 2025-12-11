//Linear Search Algorithm

#include<stdio.h>
int linearSearch(int arr[], int key, int n);
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key element : ");
    scanf("%d", &key);
    linearSearch(arr, key, n);
    return 0;
}
int linearSearch(int arr[], int key, int n){
    int found=0;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            printf("Element found at index : %d\n", i);
            found=1;
            break;
        } 
    }
    if(found==0)
        printf("Element not found .\n");
}