//program to find the smallest and largest in an array
#include<stdio.h>
int main(){
    int smallest,largest;
    int arr[10]={2,5,4,1,8,9,11,6,3,7};
    smallest,largest=arr[0];
    for(int i=1; i<10; i++)
    {
        if(arr[i]>largest)
            largest=arr[i];
        if(arr[i]<smallest)
            smallest=arr[i];
    }
    printf("Smallest = %d\nLargest = %d\n", smallest,largest);
    return 0;
}