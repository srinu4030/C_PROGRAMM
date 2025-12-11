// Find missing number from 1 to N

#include<stdio.h>
int main(){
    int n, sumArr=0;
    printf("ENter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n-1; i++){
        scanf("%d", &arr[i]);
        sumArr+=arr[i];
    }
    int totalSum=n*(n+1)/2;
    int missing =totalSum-sumArr;
    printf("the missing number : %d\n", missing);
    return 0;  
}