//Write a program in C for a 2D array of size 3x3 and print the matrix.

#define ROW 3
#define COL 3
#include<stdio.h>
int main()
{
    int mat[ROW][COL];
    printf("Enter the elements (%dx%d) row-wise : \n", ROW, COL);
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
            {
                scanf("%d", &mat[i][j]);
            }
    }

    printf("The matrix is : \n");
    for(int i=0; i<ROW; i++)
    {
        for (int j=0; j<COL; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;

}