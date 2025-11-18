// Program to print  elements of a 2-D array by subscripting a pointer to an array variable.

#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the size of the array : ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    printf("Enter the array elemnts : \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int (*ptr)[m]=arr;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", ptr[i][j]);
        }

        printf("\n");
    }
}