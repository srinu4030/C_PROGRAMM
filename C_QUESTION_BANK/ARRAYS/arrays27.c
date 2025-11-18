//Write a program in C to accept two matrices and check whether they are equal

#include<stdio.h>
int main(){
    int n;
    int flag=1;
    printf("enetr the size of matrix : ");
    scanf("%d", &n);
    int mat1[n][n], mat2[n][n];
    int i, j;
    printf("enetr the first matrix elements : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enetr the second matrix elements : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(mat1[i][j]!=mat2[i][j])
            {
                flag=0;
                break;    
            }   
        }
        if(flag==0)
            break;
    }
    if(flag==1)
        printf("Both matrices are equal.\n");
    else
        printf("They are not equal.\n");    

}