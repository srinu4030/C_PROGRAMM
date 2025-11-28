//Write a program that enters temperature in Celsius and converts that into Fahrenheit.

#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the temperature in celcius : ");
    scanf("%f", &c);

    f=(c*9.0/5.0)+32;
    printf("The temperature in fahrenheit : %f\n", f);
    return 0;
}

//C = (F - 32) × 5/9
