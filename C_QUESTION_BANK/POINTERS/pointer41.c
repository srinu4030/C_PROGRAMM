// Write a program to multiply two matrix using pointers

#include<stdio.h>
int main(){
    int n1,m1;
    int n2, m2;
    printf("Enter the values of n1 and m1 : ");
    scanf("%d %d", &n1, &m1);
    printf("Enter the values of n1 and m1 : ");
    scanf("%d %d", &n2, &m2);
     if (m1 != n2) {
        printf("Matrix multiplication not possible! Columns of first != rows of second.\n");
        return 0;
    }
    int a[n1][m1], b[n2][m2], c[n1][m2];
    printf("Enyter the first matrix elements : ");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m1; j++)
        {
            scanf("%d", (*(a+i)+j));
        }
    }
    printf("Enter the second matrix elements : ");
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<m2; j++)
        {
            scanf("%d", (*(b+i)+j));
        }
    }
    //multiplication of two matrices
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m2; j++)
        {
            *(*(c+i)+j)=0;
            for(int k=0; k<m1; k++)
            {
                *(*(c+i)+j)+=*(*(a+i)+k) * *(*(b+k)+j);
            }
        }
    }
    printf("Multiplication of two matrices is : \n");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m2; j++)
        {
            printf("%d ",  *(*(c+i)+j));
        }
        printf("\n");
    }

}