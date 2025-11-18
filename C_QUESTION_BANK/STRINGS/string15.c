//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int n=strlen(str);

    for(int i=0; i<n-1; i++)
    {
        
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-('a'-'A');  //lowercase--->uppercase

        else if (str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+('a'-'A');    
    }
    printf("The modified sentence is  : %s", str);
    return 0;
}


/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    printf("Modified sentence: %s\n", str);
    return 0;
}
*/