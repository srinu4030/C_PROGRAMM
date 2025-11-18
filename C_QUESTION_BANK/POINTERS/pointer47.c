//Write a program to print pointer to an array

#include<stdio.h>
int main(){
    int arr[4]={100,200,300,400};
    int (*ptr)[4];
    ptr=&arr;

    for(int i=0; i<4; i++)
    {
        //printf("%d ", (*ptr)[i]);
        printf("%d ", *(*ptr+i));
    }

}