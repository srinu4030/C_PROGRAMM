//WRITE A C PROGRAM TO FIND THE SUM OF ELEMENTS IN AN ARRAY USING A WHILE LOOP

#include<stdio.h>
int main(){
    int sum=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<10; i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of array elements is : %d", sum);
}