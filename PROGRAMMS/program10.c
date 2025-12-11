//Find first non-repeating character

#include<stdio.h>
int main(){
    char str[100];
    int freq[256]={0};
    int i;
    printf("Enter the string : ");
    scanf("%s", str);
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    for(int i=0; str[i]!='\0'; i++){
        unsigned char ch =str[i];
        freq[ch]++;
    }
    for(int i=0; str[i]!='\0'; i++){
        char ch=str[i];
        if(freq[ch]==1){
            printf("The first non repeating character is : %c", str[i]);
            return 0;
        }
    }
    printf("There is no first non repeating character in the string.\n");
    return 0;
}