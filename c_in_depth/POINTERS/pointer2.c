//dereferencing the pointer variables

#include<stdio.h>
int main(){
    char ch='a';
    int a=87;
    float b=4.5;
    int *p1;
    p1=&a;
    float *p2;
    p2=&b;
    printf("Value of p1 = Address of a= %p\n", p1);
    printf("Adress of a = %p\n", &a);
    printf("Address of p1 = %p\n", &p1);
    printf("Value of p2 = Address of b= %p\n",p2);
    printf("Address of b = %p\n", &b);
    printf("Address of p2 = %p\n", &p2);
    printf("Value of a = %d %d %d\n", a, *p1, *(&a));
    printf("Value of a = %.lf %.lf %.lf\n", b, *p2, *(&b));
    printf("%d\n",sizeof(p1));
    printf("%d\n", sizeof(*p1));
    printf("%d\n", sizeof(p2));
    printf("%d\n",sizeof(*p2));
    printf("%d\n", sizeof(ch));
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));


    return 0;
}