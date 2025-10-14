//bitwise operations

#include<stdio.h>
int main(){
    char ch;
    printf("Enther the alphabet:");
    scanf("%c", &ch);

    if ((ch & 0x7F)>='A' && (ch & 0x7F)<='Z')
    { 
        printf("'%c' is uppercase alphabet\n", ch);
    }
    else if ((ch & 0x7F)>='a' && (ch & 0x7F)<='z')
    {
        printf("%c is lowercase alphabet\n", ch);
    }
    else
    {
        printf("Is not an alphabet.\n");
    }
    return 0;
}


