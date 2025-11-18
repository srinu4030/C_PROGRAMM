//program to input and display a matrix
#define ROW 4
#define COL 3
#include<stdio.h>
int main()
{
    int mat [ROW][COL],i,j;
    printf("Enter the elements of the matrix(%dx%d) row-wise : \n", ROW,COL);
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix that you have entered is :\n");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            printf("[%d] ", mat[i][j]);
        printf("\n");    
    }
    printf("\n");
    return 0;
}