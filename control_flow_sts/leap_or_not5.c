//using else-if ladder and switch-case

#include <stdio.h>
int main() {
    int year, leapFlag = 0;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        leapFlag = 1;
    else if (year % 100 == 0)
        leapFlag = 0;
    else if (year % 4 == 0)
        leapFlag = 1;
    else
        leapFlag = 0;

    switch (leapFlag) {
        case 1:
            printf("%d is a leap year.\n", year);
            break;
        case 0:
            printf("%d is not a leap year.\n", year);
            break;
    }

    return 0;
}
