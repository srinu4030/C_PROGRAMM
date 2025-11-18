//Write a program to find the factorial of a given number using pointers

#include<stdio.h>
int factorial(int *n);
int main(){
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    //int *ptr;
    // ptr=&n;

    int result=factorial(&n);
    printf("The factorial of given number is : %d\n", result);
}

int factorial(int *n)
{
    
    int fact=1;
    for(int i=1; i<=*n; i++)
    {
        fact*=i;
    }
    return fact;
}