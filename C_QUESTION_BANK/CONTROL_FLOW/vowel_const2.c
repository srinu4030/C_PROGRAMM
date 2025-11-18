#include<stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    scanf("%c", &ch);

    if (!isalpha(ch)) {
        printf("'%c' is not an alphabet character.\n", ch);
        return 0;
    }
    switch(tolower(ch))
    //switch(ch)
    {
        case 'a':
        //case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

        // case 'a': case 'A':case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U'
            printf("%c is a vowel character\n", ch);
            break;
        default :
            printf("%c is a character consonant\n", ch);    
    }
    return 0;
}