//using else if laddder and logical OR operator

#include<stdio.h>
int main(){
    int month;
    printf("enter the month:");
    scanf("%d", &month);


    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("%d month has 31 days\n", month);
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {
        printf("%d month has 30 days\n", month);
    }
    else if (month==2)
    {
        printf("%d month has 28 or 29 days\n", month);
    }
    else
    {
        printf("Invalid month\n");
    }
    return 0;
}