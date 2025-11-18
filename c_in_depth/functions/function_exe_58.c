//Julian  day of a date
#include<stdio.h>
int findJulian(int d, int m, int y);
int isLeapYear(int y);
int main(){
    int d,m,y;
    printf("Enter date(dd mm yyyy) : ");
    scanf("%d %d %d", &d,&m,&y);
    int julian=findJulian(d,m,y);
    printf("Julian day of %d %d %d is %d\n", d,m,y,julian);
    return 0;
} 
int isLeapYear(int y)
{
    if(y%100 !=0 && y%4==0 || y%400==0)
        return 1;
    else
        return 0;    
}
int findJulian(int d, int m , int y)
{
    int monthDays[12]={31,28,31,30,31,30,31,31,30,31,31,31};
    int julian=0;
    if(isLeapYear(y))
        monthDays[1]=29;
    for(int i=0; i<m-1; i++)
        julian+=monthDays[i];
    julian+=d;
    return julian;    
}
