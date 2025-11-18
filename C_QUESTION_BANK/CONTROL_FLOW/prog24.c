//WRITE A C PROGRAM TO PRINT ALL THE ELEMENTS OF AN ARRAY USING A FOR LOOP?

#include<stdio.h>
int main(){
    int n;
    int arr[100];
    printf("Enter the number of elemets:");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(int i=0; i<n; i++)
    {    printf("The array elements are:");
        printf("%d\n", arr[i]);  
    }  
}