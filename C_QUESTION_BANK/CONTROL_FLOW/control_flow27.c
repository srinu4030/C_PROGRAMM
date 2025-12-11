//WRITE A C PROGRAM TO COUNT THE NUMBER OF WORDS IN A GIVEN STRING USING A WHILE LOOP?

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    int word=0, inword=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]!=' ' && str[i]!='\n' && str[i]!='\t'){
            if(inword==0){
                word++;
                inword=1;
            }
        }
        else
            inword=0;
        
        i++;
    }
    printf("The number of words in a sentence is : %d\n", word);
    return 0;
}
