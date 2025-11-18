//Create a function that swaps two numbers using   pointers.

#include<stdio.h>
int swapNumbers(int *a, int *b);
int main(){
    int a, b;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Before swap :");
    printf("a=%d, b=%d\n", a,b);
    swapNumbers(&a, &b);
    printf("Original values changes in main function: ");
    printf("a=%d, b=%d\n", a,b);    
        
}
int swapNumbers(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swap :");
    printf("a=%d, b=%d\n", *a,*b);
}