//. Write a program in C to merge two arrays of the same size sorted in descending order

#include<stdio.h>
int main(){
    int n, temp;
    printf("Enter the value n :\n");
    scanf("%d", &n);
    int i, arr1[5],arr2[5],  merge[2*n];
    printf("Enter first array elements : \n");
    for(i=0; i<n; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the second array elements : \n");    
    for(i=0; i<n; i++)
        scanf("%d", &arr2[i]);
    for(i=0; i<n; i++){
        merge[i]=arr1[i];
        merge[i+n]=arr2[i];
    }
    for(i=0; i<2*n-1; i++)
    {
        for(int j=i+1; j<2*n; j++)
        {
            if(merge[i]<merge[j])
            {
                temp=merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }

        }
    }
    printf("The merged array is descending order : \n");
    for(i=0; i<2*n; i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}

    