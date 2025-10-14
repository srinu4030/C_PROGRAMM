#include<stdio.h>
int main(){
    int M, N;
    printf("Enter an integer M:");
    scanf("%d", &M);

    N=(M>0)?1: ((M==0)? 0:-1);
    printf("The value of N is:%d\n", N);
    return 0;
}
