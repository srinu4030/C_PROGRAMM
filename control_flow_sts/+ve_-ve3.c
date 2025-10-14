// using switch-case

#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    
    int sign=(num>0)?1:(num<0)?-1:0;

    switch(sign){
        case 1:
             printf("%d is positive number.\n", num);
             break;

        case -1:
             printf("%d is negative number.\n", num);
             break;
        case 0:
             printf("number is zero.\n");
             break;
        default :
             printf("unexpected value.\n");           
    }
    printf("switch_case");
    return 0;
}
