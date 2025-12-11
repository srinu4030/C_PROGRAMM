//.WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A GIVEN STRING USING A FOR LOOP?

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    int count=0;
    for(int i=0; str[i]; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    printf("The  umber of vowels in this string is :  %d\n", count);
    return 0;


}

