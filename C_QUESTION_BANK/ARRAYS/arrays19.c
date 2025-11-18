//Write a program in C for the multiplication of two square matrices.

#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3
#include<stdio.h>
int main(){
    int i,j,mat1[ROW1][COL1], mat2[ROW2][COL2],mat3[ROW1][COL2];
    printf("Enter the elements for matrix one (%dx%d) row-wise : \n", ROW1,COL1);
    for(i=0; i<ROW1; i++)
    {
        for(j=0; j<COL1; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter the elements for matrix two (%dx%d) row-wise : \n", ROW2,COL2);
    for(i=0; i<ROW2;i++)
    {
        for(j=0;j<COL2; j++)
            scanf("%d", &mat2[i][j]);
    }
    printf("The multiplication of two matrices : \n");
    for(i=0; i<ROW1; i++)
    {
        for(j=0; j<COL2; j++)
        {
            mat3[i][j]=0;
            for(int k=0; k<COL1; k++)
            {    
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
            
    }
    printf("The resultant matrix is : \n");
    for(i=0; i<ROW1; i++)
    {
        for(j=0; j<COL2; j++)
            printf("%d ", mat3[i][j]);
        printf("\n");    
    }
    return 0;
}