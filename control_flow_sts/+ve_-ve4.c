//Using Arithmetic Sign Extraction

#include <stdio.h>
#include<stdlib.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Zero\n");
    else {
        int sign = num / abs(num);
        if (sign > 0)
            printf("Positive\n");
        else
            printf("Negative\n");
    }

    return 0;
}
