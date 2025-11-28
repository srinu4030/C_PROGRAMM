//Write MACRO to Swap the bytes in a 64-bit Integer Variable.

#include<stdio.h>
#define SWAP(x) (((x & 0x00000000000000FFULL)<<56) | ((x & 0x000000000000FF00ULL)<<40) | ((x&0x0000000000FF0000ULL)<<24) |((x & 0x00000000FF000000ULL)<<8) |((x & 0x000000FF00000000ULL)>>8) | ((x & 0x0000FF0000000000ULL)>>24) | ((x & 0x00FF000000000000ULL)>>40) | ((x & 0xFF00000000000000ULL)>>56))
int main(){
    unsigned long long num=0x1122334455667788ULL;
    unsigned long long swapped =SWAP(num);
    printf("Original : 0x%llx\n", num);
    printf("swapped : 0x%llx\n", swapped);
    return 0;
}