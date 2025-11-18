//using while --> for repeated checks without restarting

#include <stdio.h>

int main() {
    char choice = 'Y';
    int age;

    while (choice == 'Y' || choice == 'y') {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age >= 18)
            printf("You are eligible to vote.\n");
        else
            printf("You are not eligible to vote.\n");

        printf("Do you want to check another age? (Y/N): ");
        scanf(" %c", &choice);  // Note the space before %c to consume newline
    }

    printf("Program terminated.\n");
    return 0;
}
