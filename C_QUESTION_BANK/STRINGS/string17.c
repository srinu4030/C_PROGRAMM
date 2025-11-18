// Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],result[100];
    int i=0, j=0;
    printf("Enter the string  :");
    fgets(str, sizeof(str), stdin);
    int n=strlen(str);

    for(int i=0; i<n; i++)
    {
        if ((str[i]>='a' && str[i]<='z')||(str[i]>='A' &&str[i]<='Z'))
        {
            result[j]=str[i];
            j++;
        }
    }
    result[j]='\0';  // end string
    printf("The new string is : %s\n", result);
    return 0;
}