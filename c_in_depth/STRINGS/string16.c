//Program to input a date and print month

#include<stdio.h>
int main(){
    int d,m,y;
    char *months[]={"january","february","march", "april", "may", "june", "july","august", "september", "october", "novermber", "december"};
    printf("Enter the date (DD/MM/YYYY): ");
    scanf("%d %d %d", &d, &m, &y);
    printf("%d %s %d\n", d,months[m-1],y);
    return 0;
}