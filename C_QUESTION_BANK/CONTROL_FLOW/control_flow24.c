//.WRITE A C PROGRAM TO PRINT ALL THE ELEMENTS OF AN ARRAY USING A FOR LOOP?

#include<stdio.h>
int main(){
    int n, arr[n];
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The array elements are : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}