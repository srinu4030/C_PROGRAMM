//Write a C program to find the length of a string.

//strlen() funtion

#include<stdio.h>
int astrlen(char str[]);
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);

    int result=astrlen(str);
    printf("The length of the string is : %d\n", result);
    return 0;
}
int astrlen(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}