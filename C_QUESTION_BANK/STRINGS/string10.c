//Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    //scanf("%s", str);
    fgets(str, sizeof(str), stdin); //reads string including spaces
    int count=0;

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]!='\n')
            count++;
    }

    printf("The number of characters : %d\n", count);
    return 0;
}