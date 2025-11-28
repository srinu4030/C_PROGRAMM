//How to check if a particular bit is set or not in a number?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if(num&(1<<pos))
        printf("BIT %d is set\n", pos);
    else
        printf("BIT %d is not set.\n", pos);
    return 0;        
}