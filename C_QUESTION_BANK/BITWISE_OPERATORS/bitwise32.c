//Write MACRO to Swap the bytes in a 32-bit Integer Variable.

#include<stdio.h>
#define SWAP32(x) (((x & 0x000000FF)<<24)|((x & 0x0000FF00)<<8) |((x & 0x00FF0000) >> 8) | ((x & 0xFF000000)>>24))

int main(){
    unsigned int num = 0xA1B2C3D4;
    unsigned int swapped = SWAP32(num);

    printf("Original is : 0x%X\n", num);
    printf("Swapped is : 0x%X\n", swapped);
    return 0;


}