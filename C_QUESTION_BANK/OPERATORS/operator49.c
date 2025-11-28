/*Develop a program to find the maximum of three numbers using the conditional operator*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENter the three number : ");
    scanf("%d %d %d", &a, &b, &c);

    (a>b && a>c)?printf("%d  is greater.\n", a):(b>a && b>c)?printf("%d is greater.\n", b):printf("%d is greater.\n", c);
    return 0;
}