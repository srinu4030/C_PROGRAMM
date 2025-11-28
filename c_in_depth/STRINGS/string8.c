//strcat() function
/*
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100]="srinu ";
    char str2[50]="anil ";
    //printf("Enter the two strings : ");
    //scanf("%s %s", str1, str2);
    printf("The concatenated string is : %s", strcat(str1, str2));
    return 0;
}
*/

/*
//pointer version
#include<stdio.h>
char* astrcat(char *str1, char *str2);
int main(){
    char str1[200];
    char str2[100];
    printf("Enter the two strings : ");
    scanf("%s %s", str1,str2);
    char * result=astrcat(str1,str2);
    printf("The concatenated string is : %s", result);
    return 0;
}
char * astrcat(char *str1, char *str2)
{   
    char *temp=str1;
    while(*str1 !='\0')
        str1++;
    while((*str1=*str2)) 
    {
        str1++;
        str2++;
    } 
    return temp;
}
*/

//array version
#include<stdio.h>
char* astrcat(char str1[], char str2[]);
int main(){
    char str1[200];
    char str2[100];
    printf("Enter the two strings : ");
    scanf("%s %s", str1,str2);
    char * result=astrcat(str1,str2);
    printf("The concatenated string is : %s", result);
    return 0;
}
char * astrcat(char str1[], char str2[])
{   
    int i=0,j=0;
    while(str1[i] !='\0')
        i++;
    while((str1[i]=str2[j])) 
    {
        i++;
        j++;
    } 
    return str1;
}