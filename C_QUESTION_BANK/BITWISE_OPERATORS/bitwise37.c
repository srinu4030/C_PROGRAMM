//Count the number of set bits in a number

#include<stdio.h>
int main(){
    int num;
    int count=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while(num)
    {
        if(num & 1)
            count++;
        num=num>>1;
    }
    printf("Number of set bits is %d\n", count);
    return 0;
}    


//(Brian Kernighan’s Algorithm)
#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &num);

    while (num) {
        num = num & (num - 1);  // Clears rightmost set bit
        count++;
    }

    printf("Number of set bits: %d\n", count);
    return 0;
}


//count clear bits
#include <stdio.h>

int main() {
    unsigned int num;
    int setBits = 0;
    int totalBits = sizeof(unsigned int) * 8; // usually 32 bits

    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int temp = num;

    // Count set bits
    while (temp) {
        if (temp & 1)
            setBits++;
        temp = temp >> 1;
    }

    int clearBits = totalBits - setBits;

    printf("Number of clear bits: %d\n", clearBits);
    return 0;
}
