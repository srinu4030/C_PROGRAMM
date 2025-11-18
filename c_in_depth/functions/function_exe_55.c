//leap year or not
#include<stdio.h>
int isleap(int year);
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if(isleap(year))
        printf("%d is a leap year.\n", year);
    else   
        printf("%d is not a leap year.\n", year);   
    return 0;     
}
int isleap(int year)
{
    if(year%100 !=0 && year % 4==0 ||year % 400==0)
        return 1;
    else
        return 0;    
}