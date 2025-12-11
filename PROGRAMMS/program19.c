//Reverse string using pointers

#include<stdio.h>
void reverseString(char *str);
int main(){
    char str[100];
    printf("Enter the string : ");
    //scanf("%s",str);
    fgets(str, sizeof(str), stdin);
    reverseString(str);
    printf("After reversing string is : %s\n", str);
    return 0;
}
void reverseString(char *str){
    char *start=str; //0xa000
    char *end=str;   //0xa004
    char temp;
    while(*end !='\0'){
        end++;       //0xa005
    }
    end--;           //0xa004
    while(start<end){
        temp=*start; 
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}