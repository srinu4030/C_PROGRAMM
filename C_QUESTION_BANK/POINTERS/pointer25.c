// Implement a function to copy one string into another using pointers, without using any standard library functions

#include<stdio.h>
void stringCopy(char *src, char *dest);
int main(){
    char src[100], dest[100];
    printf("Enter the sting : ");
    //scanf("%[^\n]", src);
    //scanf("%s", src);
    gets(src);

    stringCopy(src, dest);

    printf("The copied string is  : %s\n", dest);
}
void stringCopy(char *src, char*dest)
{
    while( *src !='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
}