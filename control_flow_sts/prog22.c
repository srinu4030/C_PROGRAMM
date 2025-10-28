#include<stdio.h>
int main(){
    int largest,n;
    int arr[100];
    printf("Enter the elements (max100):");
    scanf("%d", &n);
    printf("Enter the %d elements \n", n);


    for(int i=0; i<n; i++)
        scanf("%d\n", &arr[i]);
    largest=arr[0];
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
            largest=arr[i];
    }
    printf("The largest element is : %d\n", largest);
}