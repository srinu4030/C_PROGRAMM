//Write a program in C to count the total number of words in a string.

#include<stdio.h>
int main(){
    char str[1000];
    printf("Enter the string : ");
    //scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    int count =0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if((str[i]!=' ' && str[i]!='\n') &&                        // ensures we are inside a word, not on a space or newline.
        (str[i+1]==' ' || str[i+1]=='\n' || str[i+1]=='\0'))       //ensures the next character is a word boundary (space, newline, or end of string).
            count++;
    }
    printf("word count is %d\n", count);
    return 0;
}