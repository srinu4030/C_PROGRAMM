// Write a program in C to find the sum of rows and columns of a matrix.

#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &row,&col);

    int mat[row][col];
    printf("Enter the elements :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            scanf("%d", &mat[i][j]);
    }

    //rowSum
    int rowSum, colSum;
    for(int i=0; i<row; i++)
    {
        int rowSum=0;
        for(int j=0; j<col; j++)
            rowSum+=mat[i][j];
        printf("Sum of row %d = %d\n", i+1,rowSum);    

    }
    

    //colSum;
    for(int i=0; i<col; i++)
    {
        int colSum=0;
        for(int j=0; j<row; j++)
            colSum+=mat[j][i];
        printf("Sum of column %d =%d\n", i+1,colSum);    
    }
    return 0;
}