#include<stdio.h>
int main(){
    int n, smallest;
    int arr[100];
    printf("Enter the elements (max 100):");
    scanf("%d", &n);
    printf("Enter  %d elements\n", n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    smallest=arr[0];
    for(int i=0; i<n; i++)
    {
        
        if(arr[i]<smallest)
            smallest=arr[i];   
    }    
    printf("The smallestt element is %d", smallest);
}