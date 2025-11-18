// Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
int main(){
    char str[100];
    int alphabets=0, digits=0, special=0;
    printf("Enter the string : ");
    scanf("%s", str);

    for(int i=0; str[i]!='\0'; i++)
    {
        char ch=str[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            alphabets++;
        else if(ch>='0' && ch<='9')
            digits++;
        else if(ch !=' ' && ch!='\n')
            special++;        
    }
    printf("Number of alphabets is : %d\n",alphabets);
    printf("Number of digits is :%d\n", digits);
    printf("Numbe rof specials is :%d\n", special);
    return 0;
}