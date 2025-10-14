#include<stdio.h>
int main(){
    int M, N;
    printf("Enter an integer M:");
    scanf("%d", &M);

    if (M>0)
      N=1;
    else if(M==0)  
      N=0;
    else
      N=-1;
      
    printf("value of N is: %d\n", N);
    return 0;
}