// Write a program to find the largest element using Dynamic Memory Allocation.

#include<stdio.h>
#include<stdlib.h>  //for malloc(), free()
int main(){
    int n;
    printf("Enter the number elements : ");
    scanf("%d", &n);
    int largest;
    int *ptr;
    ptr=malloc(n*sizeof(int)); //dynamically alloctaing memory
    if(ptr==NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }
    printf("Enter the %d elements  : \n", n); 
    for(int i=0; i<n; i++)
    {
        scanf("%d", ptr+i);
    }
    largest=*ptr;   //first element is largest initially 
    for(int i=1; i<n; i++)
    {
        if((*ptr+i)>largest)
            largest=*(ptr+i);
    }
    printf("The largest element is: %d\n", largest);
    free(ptr);  //free that allocated memory

}
