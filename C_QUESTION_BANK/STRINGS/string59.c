/*Write a C program to find the highest frequency character in a string.*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int freq[256]={0};
    int max=0;
    char maxChar;
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    // Count frequencies
    for(int i=0; str[i]!='\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    // Find maximum frequency character
    for(int i=0; i<256; i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            maxChar=(char)i;
        }
    }
    
    printf("Character with highest frequency: '%c'\n", maxChar);
    printf("Frequency: %d\n", max);

    return 0;

}