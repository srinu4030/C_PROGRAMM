// strcpy() function

/*
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="srinu";
    char str2[100];
    printf("The copied string is  : %s\n", strcpy(str2,str1));
    return 0;
}
*/

/*
//pointer version
#include<stdio.h>
char* astrcpy(char *dst, char*src);
int main(){
    char str1[100];
    char str2[100];
    printf("Enter the  first string : ");
    scanf("%s", str1);
    char* result=astrcpy(str2,str1);
    printf("The copied string is : %s", result);
}
char* astrcpy(char *dst, char *src)
{
    char *temp=dst;
    while((*dst=*src))
    {
        dst++;
        src++;
    }
    return temp;
}
*/

//array version

#include<stdio.h>
char* astrcpy(char str2[], char str1[]);
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the first string : ");
    scanf("%s", str1);
    char* result=astrcpy(str2,str1);
    printf("The copied string is : %s", result);
}
char* astrcpy(char str2[], char str1[])
{
    int i=0;
    while(str2[i]=str1[i])
    {
        i++;
    }
    return str2;

}



