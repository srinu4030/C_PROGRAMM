// Write a program  to sort an array using a pointer

#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbers of elements : ");
    scanf("%d", &n);
    int arr[n];
    int *ptr;
    ptr=arr;
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }
    //sorting the array
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    printf("The sorted array in ascending order :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}