//Check if a string is Pangram or not 
//The quick brown fox jumps over the lazy dog

#include<stdio.h>
#include<ctype.h>
int main(){
    char str[1000];
    int freq[26]={0};
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!='\0'; i++){
        char ch=tolower(str[i]);
        if(ch>='a' && ch <='z'){
            freq[ch-'a']++;
        }
    }
    // Check if all letters appear at least once
    for(int i=0; i<26; i++){
        if(freq[i]==0){
            printf("Not Pangram\n");
            return 0;
        }
    }
    printf("String is Pangram.\n");
    return 0;
}





    
