//Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the elements : ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter the elements : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The upper triangular matrix is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j>=i)
                printf("%d ", mat[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}