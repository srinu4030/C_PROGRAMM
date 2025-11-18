//using switch-cse
//if M>0--> True means 1
//if M>0--> False means 0
//1-1=0, 1-0=1, 0-0=0

#include<stdio.h>
int main(){
    int M, N;
    printf("Enter an integer M:");
    scanf("%d", &M);


    switch((M>0)-(M<0)){
        case 1:
            N = 1;
            break;
        case 0:
            N = 0;
            break;
        case -1:
            N = -1;
            break;
    }

    printf("Value of N is: %d\n", N);
    return 0;
}
    
