// Write a program  to swap elements using call by reference.

#include<stdio.h>
void swapElement(int *a, int *b);
int main(){
    int a,b;
    printf("Enter the values of a and b : ");
    scanf("%d %d", &a, &b);
    swapElement(&a, &b);  //// Call by reference — pass addresses
    printf("After swapping : \n");
    printf("a=%d b=%d", a,b);
    return 0;
}
void swapElement(int *a, int *b)
{
    //int temp;
    int temp=*a;
    *a=*b;
    *b=temp;
}