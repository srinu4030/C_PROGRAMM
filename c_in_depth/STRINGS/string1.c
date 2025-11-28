//Program to print characters of string and address of each character.
#include<stdio.h>
int main(){
    char str[]="Inida";
    for(int i=0; str[i]; i++)
    {
        printf("Character : %c\t", str[i]);
        printf("Address is : %p\n", &str[i]);
    }
    return 0;
}