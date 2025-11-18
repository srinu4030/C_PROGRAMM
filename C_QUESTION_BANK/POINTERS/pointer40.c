// Write a  program to add two matrices using pointers.

#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the sizes of two arrays : ");
    scanf("%d %d", &n, &m);

    int mat1[n][m];
    int mat2[n][m];
    int mat3[n][m];
    printf("Enter the firrst matrix elements : ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", (*(mat1+i)+j));
        }
    }
    printf("Enter the second array elements : ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", (*(mat2+i)+j));
        }
    }
    //addition of two matrices
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
             *(*(mat3+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
        }
    }

    printf("The addition of two matrices is : \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
             printf("%d ",*(*(mat3+i)+j));
        }
        printf("\n");
    }
    return 0;

}

/*
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], C[r][c];
    int *pA = &A[0][0];
    int *pB = &B[0][0];
    int *pC = &C[0][0];
    int total = r * c;

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < total; i++) {
        scanf("%d", pA + i);
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < total; i++) {
        scanf("%d", pB + i);
    }

    // Add both matrices
    for (int i = 0; i < total; i++) {
        *(pC + i) = *(pA + i) + *(pB + i);
    }

    // Display result
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < total; i++) {
        printf("%d ", *(pC + i));
        if ((i + 1) % c == 0)
            printf("\n");
    }

    return 0;
}
*/