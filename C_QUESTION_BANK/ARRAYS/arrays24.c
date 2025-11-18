//Write a program in C to print or display the lower triangular of a given matrix.

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enetr the elemets : ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter the elements  :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
    }

    printf("the lower Triangular matrix is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>=j)
                printf("%d ", mat[i][j]);
            else
                printf("0 ");    
        }
        printf("\n");
    }
}