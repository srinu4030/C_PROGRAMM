#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ", i+j);
        }
        printf("\n");
    }
}

/*
2 
3 4 
4 5 6 
5 6 7 8 
6 7 8 9 10 
*/