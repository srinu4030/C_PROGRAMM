// Write a program in C to count the number of punctuation characters present in a string.

#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int count =0;

    for(int i=0; str[i]; i++)
    {
        if(ispunct(str[i]))
            count++;
        
    }

    printf("The count is %d\n", count);
    return 0;

}