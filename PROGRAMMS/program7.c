//Reversing a string (without using string library functions)

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    int len=0;
    while(str[len]!='\0')
        len++;
    
    int start=0, end=len-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    } 
    printf("The reversed string is : %s\n", str);
    return 0;   
}