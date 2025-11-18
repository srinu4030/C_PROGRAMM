//C Program to Find Union and Intersection of Two Arrays

#include<stdio.h>
int main(){
    int n1, n2;
    printf("Enter the sizes of two arrays  : ");
    scanf("%d %d", &n1, &n2);

    int arr1[n1], arr2[n2];
    printf("Enter the first array elements : \n");
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the second array elements  : \n");
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //union of two arrays
    //print all the first array elements
    printf("Union of arrays: ");
    for(int i=0; i<n1; i++)
    {
        printf("%d ", arr1[i]);
    }
    // Print elements of second array if not in first array
    for(int i=0; i<n2; i++)
    {
        int found=0;
        for(int j=0; j<n1; j++)
        {
            if(arr2[i]==arr1[j])
            {
                found=1;
                break;
            }
        }
        if(!found)
            printf("%d ", arr2[i]);
    }
    printf("\n");

    //Intersection of two arrays
    printf("Intersection of arrays: ");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;

}