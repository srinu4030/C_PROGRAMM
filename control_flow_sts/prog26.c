//.WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A GIVEN STRING USING A FOR LOOP

#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
    char str[100];

    printf("enter the string:");
    scanf("%s", &str);

    for(int i=0; i<strlen(str); i++)
    {
        char ch=str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    
    printf("%d", count);

}