/*Define a structure to represent a date with day, month, and year (all integers). Write a function to 
check if a given year is a leap year. */

#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};
int isLeapYear(int year);
int main()
{
    struct date d;
    printf("Enter the date(day month year) : ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    printf("The entered date is : %d/%d/%d\n", d.day,d.month,d.year);

    if(isLeapYear(d.year))
        printf("%d is a leap year.\n", d.year);
    else
        printf("%d is not a leap year.\n", d.year);
    return 0;        
}
int isLeapYear(int year)
{
    if(year % 4==0 && year % 100 !=0 || year %400 ==0)
        return 1;
    else
        return 0;    
}