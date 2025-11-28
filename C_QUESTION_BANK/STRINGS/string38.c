/*Write a C program to reverse all the vowels present in a given string. Return the newly 
created string.*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int v=0;
    char temp[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| 
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')

        {
            temp[v]=str[i];
            v++;
        }
    }
    int rev=v-1;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| 
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            str[i]=temp[rev];
            rev--;
        }
    }
    printf("The vowels reversed in a string is : %s", str);
    return 0;
}
