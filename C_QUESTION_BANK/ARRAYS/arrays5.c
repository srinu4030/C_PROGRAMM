//Write a program in C to count the total number of duplicate elements in an array.

#include<stdio.h>
int main(){
    int i, j, arr[100];
    int n,count=0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the elements :\n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("The duplicate elements count is : ");
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {   
                count++;
                break;
            }
        }
    } 
    printf("%d", count);
    return 0;   

}