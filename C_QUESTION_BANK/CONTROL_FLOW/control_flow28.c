//WRITE A C PROGRAM TO CHECK WHETHER A GIVEN STRING IS A PALINDROME OR NOT 
//USING A FOR LOOP

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string  : ");
    scanf("%s", str);
    int len=strlen(str);
    int isPalindrome=1;
    for(int i=0;i<len/2; i++){
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome)
        printf("The string is palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    return 0;     
}