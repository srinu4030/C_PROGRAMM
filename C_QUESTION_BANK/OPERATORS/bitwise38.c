//Swap two bits at a given position in an integer

#include <stdio.h>
int swapBits(int n, int p1, int p2);
int main(void)
{
    int n, p1, p2;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter first bit position (p1): ");
    scanf("%d", &p1);
    printf("Enter second bit position (p2): ");
    scanf("%d", &p2);

    int result = swapBits(n, p1, p2);
    printf("Number after swapping bits: %d\n", result);
    return 0;
}
int swapBits(int n, int p1, int p2)
{
    int bit1 = (n >> p1) & 1;  // extract bit at p1
    int bit2 = (n >> p2) & 1;  // extract bit at p2

    if (bit1 != bit2)          // only if different
    {
        n ^= (1 << p1);        // toggle bit p1
        n ^= (1 << p2);        // toggle bit p2
    }
    return n;
}


