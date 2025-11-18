//Using ASCII Ranges --> conditional operator

#include<stdio.h>
int main(){
    char ch;
    printf("Enther the alphabet:");
    scanf("%c", &ch);

    (ch>='A' && ch<='Z')?printf("'%c' is uppercase alphabet\n", ch):
    (ch>='a' && ch<='z')?printf("'%c' is  lowercase alphabet\n", ch): printf("Invalid\n");
    return 0;
}