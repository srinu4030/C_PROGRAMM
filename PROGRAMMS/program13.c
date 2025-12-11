//Program to convert uppercase to lowercase

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the uppercase string : ");
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf("The lowercase string is : %s", str);
    return 0;
}