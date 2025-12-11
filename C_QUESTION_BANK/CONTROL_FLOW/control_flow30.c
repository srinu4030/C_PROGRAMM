//.WRITE A C PROGRAM TO FIND THE LENGTH OF A STRING USING A FOR LOOP?

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    int len=0;
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }
    printf("The length of a string is : %d\n", len);
    return 0;
}