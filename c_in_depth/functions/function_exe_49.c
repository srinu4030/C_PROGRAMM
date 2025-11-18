#include<stdio.h>
int convert(float len, char unit);
int  main(){
    float len,result;
    char unit;
    printf("Enter the length :");
    scanf("%f", &len);
    printf("Enter the unit('i' for inches 'c' for centimeters) :");
    scanf("\n%c", &unit);
    result=convert(len, unit);
    
    if(unit=='i' || unit =='I')
        printf("%.2f inches= %.2f centimeters\n", len,result);
    else if(unit=='c' || unit=='C')
        printf("%.2f centimeters=%.2f inches\n", len,result);
    else
        printf("Invalid unit entered.\n");
    return 0;            
}
int convert(float len, char unit)
{
    return (unit=='i'|| unit=='I')?len*2.54:len/2.54;
}