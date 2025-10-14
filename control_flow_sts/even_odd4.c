// using switch-case

#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d", &num);

    switch(num%2)
    {
        case 0:
              printf("%d is even number.\n",num);
              break;
        case 1:
        case -1:
             printf("%d is an odd number.\n",num);
             break;
        default :
             printf("unexpected character.\n");           
    }
    return 0;
}