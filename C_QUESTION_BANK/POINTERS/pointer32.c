// Write a program to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);

    char *ptr;
    ptr=str;
    int vowels=0;
    int consonants=0;

    while(*ptr!='\0')
    {
        if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o'|| *ptr=='u' ||*ptr=='A' || *ptr=='E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
            vowels++;
        else if ((*ptr>='a' && *ptr<='z') || (*ptr >='A' && *ptr <='Z'))
            consonants++;
        ptr++;    
    } 
    
    printf("The no of vowels is %d\n", vowels);
    printf("The no of  consonants is %d\n", consonants);
    return 0;  
}