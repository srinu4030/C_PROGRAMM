/* Write a C program to count the frequency of each character in a string.*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq[256]={0};
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    if (str[n-1] == '\n')
        str[n-1] = '\0';


    for(int i=0; str[i]!='\0'; i++)
    {
        char c=str[i];
        freq[c]++;
    }
    for(int i=0; i<256; i++)
    {
        if(freq[i]>0)
        {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    return 0;
}