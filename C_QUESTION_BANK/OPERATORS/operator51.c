/*What would be the value of 'a':
 a. int a = 10/45*23%45/(45%4*21)
 b. float a = 10+45.0*23-45+(4*21.0)*/

 #include<stdio.h>
 int main(){
    int a = 10/45*23%45/(45%4*21);
    float b = 10+45.0*23-45+(4*21.0);
    printf("The value of a is :%d\n", a);
    printf("The value of b is :  %f\n", b);
    return 0;
 }