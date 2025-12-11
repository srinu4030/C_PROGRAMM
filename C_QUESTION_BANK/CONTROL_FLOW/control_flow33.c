//WRITE A C PROGRAM TO FIND THE FACTORIAL OF A NUMBER USING A WHILE LOOP?

#include<stdio.h>
int main(){
    int num;
    int fact=1;
    printf("Enter the number : ");
    scanf("%d", &num);
    int temp=num;
    if(num==1)
        printf("The factorial of number is : %d", num);
    else
    {
        while(num>0){
            fact=fact*num;
            num--;
        }
    }
    printf("The factorial of %d is :  %d\n",num,fact);
    return 0;

}