//Create a function to calculate the average of elements in an array.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    printf("Sum is =%d\n", sum);

    int average;
    average=sum/n;

    printf("Average  is %d\n", average);
    
}


/*#include <stdio.h>

// Function to calculate average
float findAverage(int arr[], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;  // convert to float to get decimal value
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float avg = findAverage(arr, n);
    printf("The average of the array elements is: %.2f\n", avg);

    return 0;
}
*/