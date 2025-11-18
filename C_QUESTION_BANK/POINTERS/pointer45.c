//Program to access dynamically allocate a 2-D array using a pointer to an array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    printf("Enter the values of a n and m : ");
    scanf("%d %d", &n, &m);

    int (*ptr)[m]=malloc(n*sizeof(*ptr));
    if(ptr==NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the matrix elements :  ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", *(ptr+i)+j);
        }
    }
    printf("The matrix elements : \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", *(*(ptr+i)+j));
        }
        printf("\n");
    }
    free(ptr);
    return 0;
}