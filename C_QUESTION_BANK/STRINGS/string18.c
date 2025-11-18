// Write a program in C to find the frequency of characters.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    int freq[256]={0};
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int n=strlen(str);

    for(int i=0; i<n; i++)
    {
        char ch=str[i];
        freq[(int)ch]++;
    }

    for(int i=0; i<255; i++)
    {
        if(freq[i]>0 && i!='\n')
        {
            printf("%c is appears %d times\n", i, freq[i]);
        }
    }
    return 0;
}