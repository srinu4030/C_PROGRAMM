//Reverse an array in-place
/*Logic
Use two pointers:
start = 0
end = n-1
Swap the elements at start and end
Move pointers:
start++
end--
Continue until start >= end*/

#include<stdio.h>
void reverseArray(int arr[], int n);
int main(){
    int arr[]={10, 20, 30, 40, 50};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, n);
    printf("After reversing array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void reverseArray(int arr[], int n)
{
    int start=0, end=n-1;        //Two-Pointer Technique
    int temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}