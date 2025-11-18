//valid date or not;

#include<stdio.h>
int isValidDateorNot(int day, int month, int year);
int isLeapYear(int year);
int main(){
    int day, month,year;
    printf("Enter the date(dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    if(isValidDateorNot(day,month,year))
        printf("The date %d %d %d is valid.\n", day,month,year);
    else
        printf("The date %d %d %d is invalid date.\n", day,month,year);
    return 0;        
}
int isLeapYear(int year)
{
    if(year % 100 !=0 && year % 4==0 || year % 400==0)
        return 1;
    else
        return 0;    
}
int isValidDateorNot(int day, int month, int year)
{
    if(year<1)
        return 0;
    if(month<1 || month>12)
        return 0;
    if(day>32)
        return 0;
    int daysInmonth;    
    switch(month)
    {
        case 1:case 3: case 5: case 7: case 8: case 10: case 12:
            daysInmonth=31;
            break;
        case 4: case 6: case 9: case 11:
            daysInmonth=30;
            break;
        case 2:
            if(isLeapYear)
                daysInmonth=29;
            else
                daysInmonth=28;
            break;
        default :
            return 0;
    }                 

    if(day<1 || day>daysInmonth)  
        return 0;
    return 1;     


}