//Program to return more than one value from a function using call by reference.

#include<stdio.h>
int calculate(int a, int b, int *sum, float *average);
int main(){
    int num1, num2, sum;
    float average;
    printf("Enter the two values : ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2, &sum, &average);

    printf("Sum is %d\n", sum);
    printf("Average is %f\n", average);

}
int calculate(int num1, int num2, int *sum, float *average)
{
    *sum=num1+num2;
    *average=(float)*sum/2;

}