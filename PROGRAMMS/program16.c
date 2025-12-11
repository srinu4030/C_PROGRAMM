//strcmp() function

#include<stdio.h>
int astrcmp(char str1[], char str2[]);
int main(){
    char str1[100];
    char str2[100];
    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);
    int result=astrcmp(str1, str2);
    if(result==0)
        printf("Both strings are equal.\n");
    else if(result>0)
        printf("First string is graeter.\n");
    else
        printf("Second string is greater.\n");
    return 0;            
}
int astrcmp(char str1[], char str2[]){
    int i=0;
    while(str1[i]==str2[i]){
        if(str1[i]=='\0'){
            break;
        }
        i++;
    }
    return str1[i]-str2[i];
}