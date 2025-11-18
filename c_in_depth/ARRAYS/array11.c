//addition of two matrices

#define ROW 3
#define COL 4
#include<stdio.h>
int main(){
    int i,j,mat1[ROW][COL], mat2[ROW][COL],mat3[ROW][COL];
    printf("Enter the elements for matrix one (%dx%d) row-wise : \n", ROW,COL);
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter the elements for matrix two (%dx%d) row-wise : \n", ROW,COL);
    for(i=0; i<ROW;i++)
    {
        for(j=0;j<COL; j++)
            scanf("%d", &mat2[i][j]);
    }
    printf("The additon of two matrices : \n");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            
    }
    printf("The resultant matrix is : \n");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            printf("%d ", mat3[i][j]);
        printf("\n");    
    }
    return 0;
}