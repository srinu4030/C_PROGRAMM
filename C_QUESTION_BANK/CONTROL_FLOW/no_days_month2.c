//using switch case

#include<stdio.h>
int main(){
    int month;
    printf("enter the month:");
    scanf("%d", &month);

    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("%d month has 31 days", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("%d month has 30 days\n", month);  
            break;
        case 2:
            printf("%d month has 28 or 29 days\n", month);
            break;
        default :
            printf("Invalid\n");       
    }
    return 0;
}
