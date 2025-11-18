// Write a program to count the number of even and odd elements in an array.

#include<stdio.h>
int main(){
    int n, i;
    int evenCount=0, oddCount=0;

    printf("Enter the size of an array  : ");
    scanf("%d", &n);
    printf("Enter the array elements : \n");
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
            evenCount++;
        else
            oddCount++;    
    }

    printf("The number of even elements is %d\n",evenCount);
    printf("The number of odd elements is %d\n", oddCount);
    return 0;
}