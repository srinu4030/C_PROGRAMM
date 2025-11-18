//using conditional operator

#include<stdio.h>
int main(){
    int month;
    printf("enter the month:");
    scanf("%d", &month);

    (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)?printf("31 days\n"):
    (month==4 || month==6 || month==9 || month==11)?printf("30 days\n"):
    (month==2)?printf("28 or 29 days\n"):printf("Invalid month\n");
     
    return 0;
}
