// by using conditional(ternary) operator
#include<stdio.h>
int main(){
    int num;
    printf("enter the  number:");
    scanf("%d", &num);

    (num%2==0)?printf("even\n"):printf("odd\n");
    //(num%2!=0)?printf("odd\n"):printf("even\n");
    //(num&1)?printf("odd\n"):printf("even\n");
    return 0;
}
