//allocate memory equal to 10 integers using malloc and calloc

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr_malloc=(int*)malloc(10*sizeof(int));
    int *ptr_calloc=(int*)calloc(10,sizeof(int));
    if(ptr_malloc==NULL ||ptr_calloc==NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Memory allocated using malloc : %p\n", ptr_malloc);
    printf("Memory allocated using calloc :%p\n", ptr_calloc);
    free(ptr_malloc);
    free(ptr_calloc);
    return 0;
}