//Implement a function to delete an element at a specific position in an array

#include<stdio.h>
void deleteElement(int *arr, int n,int pos);
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements  :");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Enter the postion an element : ");
    scanf("%d", &pos);

    deleteElement(arr,n, pos);
    
    printf("Array after deletion: ");
    for(int i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}
void deleteElement(int *arr,int n, int pos)
{
    if(pos<1 || pos>n)
    {
        printf("Position is invalid\n");
        return ;
    }
    for(int i=pos-1; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
}