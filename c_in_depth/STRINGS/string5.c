//strlen() function
/*
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    printf("The length of the string is :%u\n",strlen(str));
    return 0;
}
*/


//pointer version

#include<stdio.h>
int astrlen(char *str);
int main(){
    char str[100];
    printf("Enter the string :");
    scanf("%s", str);
    int result=astrlen(str);
    printf("Count is :%d\n", result);
    return 0;
}
int astrlen(char *str)
{
    int count=0;
    while(*str !='\0')
    {
        count++;
        str++;
        
    }
    return count;
}


/*
//array version

#include<stdio.h>
int astrlen(char str[]);
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    int result=astrlen(str);
    printf("string length is :%d\n", result);
}
int astrlen(char str[])
{
    int count=0;
    while(str[count]!='\0')
    {
        count++;
    }
    return count;
}

*/