//Swap two variables using pointers

#include<stdio.h>
int swap(int *a, int *b);
int main(){
    int a,b;
    printf("Enter the values of two variable : ");
    scanf("%d %d", &a, &b);
    printf("Before swap : a= %d, b=%d\n", a,b);
    swap(&a, &b);
    printf("After swap : a= %d, b=%d\n", a,b);
    return 0;
}
int swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}