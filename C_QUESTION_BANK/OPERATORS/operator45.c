/* Write a program that accepts marks in five subjects and calculates the total percentage 
marks.*/

#include<stdio.h>
int main(){
    int telugu,hindi,maths,science,social;
    printf("Enter the marks of five subjects: ");
    scanf("%d %d %d %d %d", &telugu,&hindi,  &maths, &science, &social);
    int total=telugu+hindi+maths+science+social;
    float percentage=total/5;
    printf("Total percentage of 5 subjects marks is : %f\n", percentage);
    return 0;
}