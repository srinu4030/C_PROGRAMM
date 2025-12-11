//Left rotate array by N positions

/*Brute force approach
#include<stdio.h>
void leftRotateArray(int arr[], int n, int d);
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int d;
    printf("Enter the positions to left rotate : ");
    scanf("%d", &d);
    leftRotateArray(arr, n,d);
    printf("After rotating array by %d positions : ",d);
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;    
}
void leftRotateArray(int arr[], int n, int d){
    d=d%n;
    int temp[d];
    for(int i=0; i<d; i++)
        temp[i]=arr[i];
    for(int i=d; i<n; i++)
        arr[i-d]=arr[i];   
    for(int i=0; i<d; i++)
        arr[n-d+i]=temp[i];     
}*/

#include<stdio.h>
void leftRotateArray(int arr[], int n, int d);
void reverse(int arr[], int start, int end);
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int d;
    printf("Enter the positions to left rotate : ");
    scanf("%d", &d);
    leftRotateArray(arr, n,d);
    printf("After rotating array by %d positions : ",d);
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0; 
}
void leftRotateArray(int arr[], int n, int d)
{
    d=d%n; //handle case  where d>n
    // Step 1: Reverse first d elements
    reverse(arr, 0, d-1);
    // Step 2: Reverse remaining n - d elements
    reverse(arr, d, n-1);
    // Step 3: Reverse entire array
    reverse(arr, 0, n-1);
}
void reverse(int arr[], int start, int end){
    int temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}