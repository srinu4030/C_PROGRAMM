//print size of array without using size of operator

#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 0}; // 0 marks the end
    int count = 0;
    while(arr[count] != 0) {
        count++;
    }
    printf("Number of elements: %d\n", count); // Output: 7
    return 0;
}
