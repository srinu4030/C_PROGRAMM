// Write MACRO to Swap the bytes in 16 bit Integer Variable.

#include<stdio.h>
#define SWAP16(x) (((x & 0x00FF)<<8) |((x & 0xFF00) >>8))

int main(){
    unsigned short num=0xABCD;
    unsigned short swapped=SWAP16(num);

    printf("Original is : 0x%X\n", num);
    printf("Swapped is : 0x%X\n", swapped);
    return 0;
}