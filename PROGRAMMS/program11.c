// Remove duplicate characters from string

#include<stdio.h>
int main(){
    char str[100];
    int freq[256]={0};
    printf("Enter the string : ");
    scanf("%s", str);

    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    for(int i=0; i<len; i++){
        unsigned char ch=str[i];
        if(freq[ch]==0){
            printf("%c", ch); 
            freq[ch]=1;
        }
    }
    printf("\n");
    return 0;
}