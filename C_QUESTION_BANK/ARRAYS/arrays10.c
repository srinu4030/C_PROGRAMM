// Write a program in C to separate odd and even integers into separate arrays.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements is :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int even[n], odd[n];
    int evenCount=0, oddCount =0;
    for(int i=0; i<10; i++)
    {
        if(arr[i]%2==0)
            even[evenCount++]=arr[i];
        else
            odd[oddCount++]=arr[i];    
    }
    printf("Even numbers :");
    for(int i=0; i<evenCount; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("odd numbers : ");
    for(int i=0; i<oddCount; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}