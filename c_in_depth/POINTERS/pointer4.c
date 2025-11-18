//pointer arithmetic

#include<stdio.h>
int main(){
    int a=5;
    int *pi;
    pi=&a;

    char c='a';
    char *pc;
    pc=&c;

    float f=12.4;
    float *pf;
    pf=&f;
    printf("Address of pi=address of a =%p\n", pi);
    printf("Address of pc=address of c=%p\n", pc);
    printf("Address of pf = address of f=%p\n", pf);
    printf("pi=%d\n", *pi);
    printf("pc=%c\n", *pc);
    printf("pf=%f\n", *pf);
    pi++;
    pc++;
    pf++;
    printf("Now value of pi = %p\n", pi);
    printf("Now value of pc = %p\n",pc);
    printf("Now value of pf = %p\n", pf);
    printf("after pi=%d\n", a);
    printf("after pc=%c\n", c);
    printf("after pf=%f\n", f);
    return 0;
}