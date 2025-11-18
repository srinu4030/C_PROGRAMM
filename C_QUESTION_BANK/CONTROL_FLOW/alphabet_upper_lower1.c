//using else if ladder

#include<stdio.h>
int main(){
    char ch;
    printf("Enther the alphabet:");
    scanf("%c", &ch);

    if (ch>='A' && ch <='Z')
    {
        printf("'%c' is a uppercase alphabet\n", ch);
    }
    else if (ch>='a' && ch<='z')
    {
        printf("'%c' is a lowercase alphabet\n", ch);
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;
}