// Write a program in C to find the maximum and minimum elements in an array

#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter the elements :\n");
    for(int i=0; i<10; i++)
        scanf("%d", &arr[i]);
    int minimum=arr[0];
    int maximum=arr[0];    
    for(int i=1; i<10; i++)
    {
        if(arr[i]<minimum)
            minimum=arr[i];
        if(arr[i]>maximum)
            maximum=arr[i];
    }
    printf("The maximum is %d and minimum is %d\n", maximum, minimum);
    return 0;
}
