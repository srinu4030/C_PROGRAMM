#include<stdio.h>
int main(){
    int a,b,c;
    int largest;
    printf("Enter the three number:");
    scanf("%d %d %d",&a,&b,&c);

    largest=(a>b && a>c)?1:(b>c && b>a)?2:3;
    switch(largest)
    {
        case 1:
           printf("The largest number is %d\n", a);
           break;
        case 2:
           printf("The largest numbber is %d\n", b);
           break;
        case 3:
           printf("The largest number is %d\n", c);
           break;
        default :
           printf("invalid\n");         
    }
    return 0;
}
