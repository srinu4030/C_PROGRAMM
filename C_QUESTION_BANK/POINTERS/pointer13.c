//program  to print the values  and address  of elements of 2-d array.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("print the values and address of each elements of 2-d array : \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("arr[%d][%d] = %d \t Address: %p\n", i, j, arr[i][j], (void*)&arr[i][j]);
        }
    }
    return 0;
}