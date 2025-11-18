// Program to print  elements of a 3-D array using pointer notation.

#include<stdio.h>
int main(){
    int x=2, y=3, z=4;
    int arr[2][3][4];
    printf("Enter the elements of the 3-D array:\n");
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            for(int k=0; k<z; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    int (*ptr)[3][4]=arr;
    printf("The elements of the 3-D array are:\n");
    for(int i=0; i<x; i++)
    {
        printf("1st block %d:\n", i);
        {
            for(int j=0; j<y; j++)
            {
                for(int k=0; k<z; k++)
                {
                    printf("%d ", ptr[i][j][k]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}