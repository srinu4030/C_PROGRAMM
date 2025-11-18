//Write a program to write all the elements of 2-D Array into !-D Array in row wise

#include<stdio.h>
#define ROW1 3
#define COL1 4

int main(){
    int n=ROW1*COL1;
    
    int mat2D[ROW1][COL1],  mat1D[n];

    printf("Enter the first array elements : \n");
    for(int i=0; i<ROW1; i++)
    {
        for(int j=0; j<COL1; j++)
        {
            scanf("%d", &mat2D[i][j]);
        }
    }

    printf("The  2-D matrix elements are : \n");
    for(int i=0; i<ROW1; i++)
    {
        for(int j=0; j<COL1; j++)
            printf("%d ", mat2D[i][j]);
        printf("\n");    
    }
    //copy the 2-D elements to the 1-D elements 
    int k=0;
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL1; j++) {
            mat1D[k++] = mat2D[i][j];
        }
    }

    printf("Elements of 1D array (row-wise): \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mat1D[i]);
    }
    printf("\n");

}
