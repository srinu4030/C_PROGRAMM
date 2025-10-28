#include<stdio.h>
int main(){
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int j=5; j>=6-i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}