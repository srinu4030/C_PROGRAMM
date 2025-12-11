//WRITE A C PROGRAM TO CONCATENATE TWO STRINGS WITHOUT USING LIBRARY FUNCTIONS USING A WHILE LOOP?

#include<stdio.h>
int main(){
    char str1[100];
    char str2[50];
    printf("Enter the first string : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string : ");
    fgets(str2, sizeof(str2), stdin);
    int i=0, j=0;
    // Remove newline in str1
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("The concatenated string is : %s", str1);
    return 0;
}