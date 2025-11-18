//bitwise operators (>>--> right shift operator)

#include <stdio.h>

int max(int, int);
int min(int, int);
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Maximum = %d\n", max(x, y));
    printf("Minimum = %d\n", min(x, y));

    return 0;
}

int max(int x, int y)
{
    return x-((x-y) & ((x-y)>>31));
}

int min(int x, int y)
{
    return y+((x-y) & ((x-y)>>31));
}
