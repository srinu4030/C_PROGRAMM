//WRITE A C PROGRAM TO COUNT THE NUMBER  OF WORDS IN A GIVEN STRING USING A WHILE LOOP


#include<stdio.h>
#include<string.h>

int main(){
    int count=0;
    char str[100];
    printf("Enter the words:");
    scanf("%s", &str);

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==" ")
         count++;
    }
    printf("count=%d",count);
}


////WRITE A C PROGRAM TO COUNT THE characters OF WORDS IN A GIVEN STRING USING A for loop

/*
#include<stdio.h>
#include<string.h>

int main(){
    int count=0;
    char str[100];
    printf("Enter the String:");
    scanf("%s", &str);

    for(int i=0; i<strlen(str); i++)
    {
        printf("char %d =%c\n", i,str[i]);
        count++;
    }
    printf("count=%d",count);
}*/