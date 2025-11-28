//strcmp() function

/*
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter the two string : ");
    scanf("%s %s", str1, str2);

    if((strcmp(str1, str2)==0))
        printf("Both strings are same .\n");
    else
        printf("Both strings are nnot same.\n");
    return 0;        
}
*/


/*
//poniter version

#include<stdio.h>
int astrcmp(char *str1, char *str2);
int main(){
    char str1[200], str2[200];
    printf("Enter the two string : ");
    scanf("%s %s", str1, str2);
    int result=astrcmp(str1,str2);
    if(result==0)
        printf("Both strings are equal.\n");
    else if(result>0)
        printf("string 1 is greater.\n");
    else
        printf("String 2 is greater.\n");
    return 0;            
}
int astrcmp(char *str1, char *str2)
{
    while(*str1==*str2)
    {
        if(*str1 =='\0')
            break;
        str1++;
        str2++;
    }
    return *str1-*str2;
}
*/

//array version

#include<stdio.h>
int astrcmp(char str1[], char str2[]);
int main(){
    char str1[100],str2[100];
    printf("Enter the two characters : ");
    scanf("%s %s", str1, str2);
    int result=astrcmp(str1,str2);
    if(result==0)
        printf("Both strings are equal.\n");
    else if(result>0)
        printf("string 1 is greater.\n");
    else
        printf("String 2 is greater.\n");
    return 0; 
    
}
int astrcmp(char str1[], char str2[])
{
    int i=0;
    while(str1[i]==str2[i])
    {
        if(str1[i]=='\0')
            break;
        i++;
    }
    return str1[i]-str2[i];
}