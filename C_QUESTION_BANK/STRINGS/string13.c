// Write a program in C to extract a substring from a given string.

#include<stdio.h>
int main(){
    char str[100], sub[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    int pos, len;
    printf("Enter the position of substring: ");
    scanf("%d", &pos);
    printf("Enter the length of the substring :");
    scanf("%d", &len);

    for(int i=0; i<len; i++)
    {
        sub[i]=str[pos+i];
    }
    sub[len]='\0';  //Null terminate the substring
    printf("The extracted substring is : %s\n", sub);
    return 0;
}