#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    //gets(str);
    fgets(str, sizeof(str), stdin);
    printf("entered string is : ");
    puts(str);
}