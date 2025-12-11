//strcpy() function 

#include<stdio.h>
char *astrcpy(char src[], char dst[]);
int main(){
    char src[100];
    char dst[100];
    printf("Enter the source string : ");
    scanf("%s", src);

    char *result=astrcpy(src, dst);
    printf("The copied string is : %s", result);
    return 0;
}
char *astrcpy(char src[], char dst[]){
    int i=0;
    while(src[i]!='\0'){
        dst[i]=src[i];
        i++;
    }
    dst[i]='\0';
    return dst;
}