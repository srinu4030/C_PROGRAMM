//Write a program in C to find the sum of the left diagonals of a matrix.

#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter the elements for a square matrix :\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
    }
    for(int i=0; i<n; i++)
        sum+=mat[i][i];

    printf("The sum of left diagonals of matrix  is : %d\n", sum);
    return 0;    
}