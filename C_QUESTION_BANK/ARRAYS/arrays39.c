//C Program To Find Two Elements whose Sum is Closest to Zero

#include <stdio.h>
#include <stdlib.h>  // for abs()

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min_sum=999999;
    int num1=0, num2=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int sum=arr[i]+arr[j];
            if(abs(sum)<abs(min_sum))
            {
                min_sum=sum;
                num1=arr[i];
                num2=arr[j];
            }
        }
    } 
    printf("The two elements whose sum is closest to zero is %d and %d\n", num1, num2);
    printf("Sum of two numbers is %d\n", num1+num2);
    return 0;
}