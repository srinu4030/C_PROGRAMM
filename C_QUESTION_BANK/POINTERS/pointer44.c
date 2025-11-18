//Program to access dynamically allocated memory as a 1d array

#include<stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the size of array :");
    scanf("%d", &n);

    int *ptr=malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocates.\n");
        return 1;
    }
     printf("Enter the array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", ptr+i);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    free(ptr);
    return 0;
}