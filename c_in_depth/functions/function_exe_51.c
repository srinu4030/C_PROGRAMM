#include<stdio.h>
int isalphanumeric(char ch);
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    if(isalphanumeric(ch))
        printf("%c is an alphanumeric character.\n", ch);
    else
        printf("%c is not an alphanumeric character.\n",ch);
    return 0;        
}
int isalphanumeric(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        return 1;
    else
        return 0;    
}