//Write a program in C to copy one string to another string
/*
#include<stdio.h>
#include<string.h>
int main(){
    char str1[25]="Srinivasarao";
    char str2[10];
    printf("%s",strcpy(str2, str1));   //destination, source
} */


#include<stdio.h>
void* astrcpy(char *dst, char *src);
int main(){
    char str1[10]="Srinu";
    char str2[10];

    printf("copied string is : %s",astrcpy(str2,str1));
    return 0;
}
void* astrcpy(char *dst, char *src)
{
    char *temp=dst;
    while(*dst=*src)
    {
        dst++;
        src++;
    }
    return temp;

}