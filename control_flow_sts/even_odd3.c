// using bitwise and(&)
//4--> 00000100
//1--> 00000001
//     00000000--zero(False)--Even
//             --non-zero(True)--Odd

#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    if (num&1)
    {
        printf("odd number\n");
    }
    else
    {
        printf("even number\n");
    }   
}