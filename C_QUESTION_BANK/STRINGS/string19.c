//. Write a program in C to combine two strings manually.

#include<stdio.h>
int main(){
    char str1[100];
    char str2[100];
    int i,j;
    printf("Enter the first string : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string : ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from str1
    for(int i=0; str1[i]!='\0'; i++){
        if(str1[i]=='\n')
        {
            str1[i]='\0';
            break;
        }
    }
    // Remove newline from str2
    for(int j=0; str2[j]!='\0'; j++){
        if(str2[j]=='\n'){
            str2[j]='\0';
            break;
        }
    }

    for(i=0; str1[i]!='\0'; i++);
    for(j=0; str2[j]!='\0'; j++,i++)
    {
            str1[i]=str2[j];
    }
    str1[i]='\0'; ///terminate the combined string
    printf("Combined string: %s\n", str1);
    return 0;
}