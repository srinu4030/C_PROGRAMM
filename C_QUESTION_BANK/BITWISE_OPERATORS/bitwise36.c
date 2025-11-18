//Check if the number is a power of 2

#include<stdio.h>
#define IS_POWER_OF2(num) ((num)>0 && (((num) & ((num)-1))==0))


int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if(IS_POWER_OF2(num))
        printf("%d is a power of 2\n", num);
    else
        printf("%d is not a power of 2\n", num);
    return 0;        
}