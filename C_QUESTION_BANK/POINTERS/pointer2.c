// Write a program to print size of pointer variables.

#include<stdio.h>
int main(){
    int i=10;
    int *iptr;
    iptr=&i;
    float f=23.5;
    float *fptr;
    fptr=&f;
    char c='A';
    char *cptr;
    cptr=&c;
    //size of pointer variables
    printf("The size of iptr is %zu\n", sizeof(iptr));
    printf("The size of fptr is %zu\n", sizeof(fptr));
    printf("The size of cptr is %zu\n", sizeof(cptr));

    //size of values dereferenced by them
    printf("The size of *iptr is %zu\n", sizeof(*iptr));
    printf("The size of *fptr is %zu\n", sizeof(*fptr));
    printf("The size of *cptr is %zu\n", sizeof(*cptr));

    //normal variables
    printf("i=%d\n", i);
    printf("f=%f\n", f);
    printf("c=%c\n", c);

    //dereferenced pointer variables
    printf("%d\n", *iptr);
    printf("%f\n", *fptr);
    printf("%c\n", *cptr);

}