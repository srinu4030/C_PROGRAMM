//.WRITE A C PROGRAM TO FIND THE LARGEST ELEMENT IN AN ARRAY USING A FOR LOOP?

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The largest element is : %d\n", largest);
    return 0;
}