//write a program to copy string without using string copy

#include<stdio.h>
int main(){
    char src[]="Srinivasa Rao";
    char dst[20];
    int i=0;
    while(src[i]!='\0')
    {
        dst[i]=src[i];
        i++;
    }
    dst[i]='\0';
    printf("Source string : %s\n", src);
    printf("Copied string is :%s\n", dst);
    return 0;
}