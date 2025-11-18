//Find whether the number is odd or even

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n&1)
        printf("odd\n");
    else
        printf("even\n");    
    return 0;    
}