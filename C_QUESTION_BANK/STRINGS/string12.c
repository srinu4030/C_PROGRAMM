// Write a program in C to read a string from the keyboard and sort it using bubble sort

#include<stdio.h>
#include<string.h>
int main(){
    
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int n=strlen(str);

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(str[j]>str[j+1])
            {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("The sorted string is : %s\n", str);
    return 0;
}