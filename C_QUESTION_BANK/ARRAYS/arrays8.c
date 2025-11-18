//Write a  program in C to count the frequency of each element of an array.

#include<stdio.h>
int main(){
    int n, i, j, count;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    int arr[n], freq[n];
    
    printf("Enter the array elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i]=-1;
    }
    for(i=0; i<n; i++){
        if(freq[i]==-1) {
        count=1;
            for(j=i+1; j<n; j++){
                if(arr[i]==arr[j])
                {
                    count++;
                    freq[j]=0;
                }
            }
            freq[i]=count;
            
        }
        
    }
    printf("Enter each element :\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
}