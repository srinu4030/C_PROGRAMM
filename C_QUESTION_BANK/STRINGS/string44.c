// Write a C program to concatenate two strings.

#include<stdio.h>
char *astrcat(char str1[], char str2[]);
int main(){
    char str1[100],str2[50];
    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);

    char *result=astrcat(str1, str2);
    printf("The copied string is : %s", result);
    return 0;
}
char *astrcat(char str1[], char str2[]){
    int i=0;
    int j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;   
    }
    str1[i]='\0';
    return str1;
}