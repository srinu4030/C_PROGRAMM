//Write a program in C to calculate the determinant of a 3 x 3 matrix

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENter the number : ");
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

    int det=mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1])- mat[0][1]*(mat[1][0]*mat[2][2]-mat[1][2]*mat[2][0])+mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);

    printf("The determinanat of 3x3 matrix is = %d", det);
}