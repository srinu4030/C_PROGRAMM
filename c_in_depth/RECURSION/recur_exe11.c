#include<stdio.h>
int func(char *s, char ch);
int main(){
    char str[100], ch;
    printf("Enter a sring : ");
    gets(str);                     //srinivasarao
    printf("Enter a character :"); 
    scanf("%c", &ch);              //a
    printf("%d\n", func(str,ch));  // 3
    return 0;
}
int func(char *s, char ch)
{
    if(*s=='\0')
        return 0;
    if(*s==ch)
        return 1+func(s+1, ch);
    return func(s+1, ch);    

}