//Write a program to write whether a matrix is symmetric or not

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter the elements for 2-D matrix :\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int symmetric=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mat[i][j]!=mat[j][i])
            {
                symmetric=0;
                break;
            }
        }
        if(!symmetric)
            break;
    }

    if(symmetric)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");  
        
    return 0;    


}