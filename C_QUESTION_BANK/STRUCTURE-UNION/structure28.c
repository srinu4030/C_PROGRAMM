/*Implement a function that takes a structure representing a date (day, month, year) and checks if the 
date is valid (e.g., not exceeding the number of days in a month). */

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

// Function to check leap year
int isLeapYear(int year) {
    return ( (year % 400 == 0) || 
             (year % 4 == 0 && year % 100 != 0) );
}

// Function to check if a date is valid
int isValidDate(struct Date d) {
    // Check valid month
    if (d.month < 1 || d.month > 12)
        return 0;

    // Days in each month
    int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    // Adjust February for leap year
    if (d.month == 2 && isLeapYear(d.year))
        daysInMonth[2] = 29;

    // Check valid day
    if (d.day < 1 || d.day > daysInMonth[d.month])
        return 0;

    return 1; // valid date
}
int main() {
    struct Date d;
    printf("Enter day month year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    if (isValidDate(d))
        printf("Valid Date.\n");
    else
        printf("Invalid Date!\n");
    return 0;
}
