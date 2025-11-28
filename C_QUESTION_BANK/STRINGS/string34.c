// Write a C program to convert vowels into uppercase characters in a string.

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]; i++)
    
    {
        if(str[i]=='a' || str[i] =='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str[i]=str[i]-32;
        }
    }
    printf("%s", str);
}