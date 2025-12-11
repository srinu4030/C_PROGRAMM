//Find second largest element

#include<stdio.h>
int secondLargest(int arr[], int n);
int main(){
    //int arr[]={10, 200, 40, 400, 150};
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array elements are : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    secondLargest(arr, n);
    return 0;
}
int secondLargest(int arr[], int n){
    int largest=arr[0];
    int secondLargest=-34567;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]<largest)
        {
            secondLargest=arr[i];
        }
    }
    if(secondLargest==-34567)
        printf("\nThere is no second largest element in the array.\n");
    else
        printf("\nThe second largest element is : %d\n", secondLargest);        
}