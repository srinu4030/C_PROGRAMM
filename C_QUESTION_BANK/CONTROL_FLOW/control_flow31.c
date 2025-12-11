//WRITE A C PROGRAM TO CONVERT A STRING TO UPPERCASE USING A WHILE LOOP?

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the lowercase string : ");
    scanf("%s", str);

    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("The uppercase string is : %s", str);
    return 0;
}