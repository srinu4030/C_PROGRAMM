//Swap all even and odd bits

#include<stdio.h>
int main(){
    unsigned int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    unsigned int even= num & 0xAAAAAAAA;
    unsigned int odd= num & 0x55555555;
    even>>=1;
    odd<<=1;
    unsigned int result= even|odd;

    printf("The number after swapping bits is : %u\n", result);
    return 0;
}