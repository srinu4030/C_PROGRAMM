//using else-if ladder

#include<stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    scanf("%c", &ch);

    if (ch=='a')
    {
        printf("%c is a vowel\n", ch);
    }
    else if (ch=='e')
    {
        printf("%c is a vowel\n", ch);
    }
    else if(ch=='i')
    {
        printf("%c is a vowel\n", ch);
    }
    else if(ch=='o')
    {
        printf("%c is a vowel\n", ch);
    }
    else if(ch=='u')
    {
        printf("%c is a vowel\n", ch);
    }
    else
    {
        printf("%c is a consonant\n", ch);
    }
    return 0;
    
}