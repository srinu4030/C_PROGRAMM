// Write a program in C to input a string and print it.

#include<stdio.h>
int main(){
    char str[1000];
    printf("Enter the string : \n");
    scanf("%s", str);
    //fgets(str,sizeof(str), stdin);
    //gest(str);
    printf("The entered string is : \n");
    //puts(str); 
    printf("%s", str);  
}