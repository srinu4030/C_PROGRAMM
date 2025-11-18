//Program to convert a decimal number ot binary, octal or hexadecimal

#include<stdio.h>
void func(int num, int b);
int main(){
    int num, ch;
    printf("Enter a decimal number : ");
    scanf("%d", &num);
    printf("1.Binary\n2.Octal\n3.HExadecimal\n");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            printf("Binary equivalent is : ");
            func(num, 2);
            break;
        case 2:
            printf("Octal Equivalent is : ");
            func(num,8);
            break;
        case 3:
            printf("Hexadecimal Equivalent is : ");
            func(num,16);
            break;
        default :
            printf("NOt valid");            
    }
    printf("\n");
    return 0;
}
void func(int num, int b)
{
    int i=0, rem=0;
    char arr[20];
    if(num == 0) {
        printf("0");
        return;
    }
    while(num>0)
    {
        rem=num%b;
        num/=b;
        if(rem>9 && rem<16)
            arr[i++]=rem-10+'A';
        else
            arr[i++]=rem+'0';
    }
    for(int j=i-1; j>=0; j--)
        printf("%c", arr[j]);

}