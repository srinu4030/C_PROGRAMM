//Write a program in C to find the number of times a given word 'the' appears in the given string.

#include<stdio.h>
int main(){
    char str[100];
    char word[10];
    int count=0;
    int i=0, j=0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    while(str[i]!='\0')
    {
        if (str[i]!=' ' && str[i]!='\n')
        {
            word[j]=str[i];
            j++;
        }
        else
        {    
            word[j]='\0';
            if (word[0]=='t' && word[1]=='h' && word[2]=='e' && word[3]=='\0')
            {
                count++;
            }
            j=0;
        }
        i++;
    }
    printf("The word 'the' appears %d times.\n", count);
    return 0;
}