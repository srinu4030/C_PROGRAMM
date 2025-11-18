//Write a program to find the sum of rows and columns of a 2-d array and store the sums in the same array


#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int arr[m+1][n+1];  // Extra row and column to store sums

    // Input array elements
    printf("Enter elements of the array:\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<m; i++)
    {
        int rowSum=0;
        for(int j=0; j<n;j++)
        {
            rowSum+=arr[i][j];
        }
        arr[i][n]=rowSum;
    }
    for(int j=0; j<n; j++)
    {
        int colSum=0;
        for(int i=0; i<m;i++)
        {
            colSum+=arr[i][j];
        }
        arr[m][j]=colSum;
    }
    printf("Array with row and column sums:\n");
    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }

    return 0;
}

