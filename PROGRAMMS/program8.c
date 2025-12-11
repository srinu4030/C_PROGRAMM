//Check two strings are anagram or not

#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    int freq1[256]={0}, freq2[256]={0};
    printf("Enter the first string : ");
    scanf("%s",str1);
    printf("Enter the second string : ");
    //gets(str2);
    scanf("%s", str2);
    if(strlen(str1)!=strlen(str2)){
        printf("Not Anagrams.\n");
        return 0;
    }
    for(int i=0; str1[i]!='\0'; i++){
        freq1[(unsigned char)str1[i]]++;
        freq2[(unsigned char)str2[i]]++;
    }
    for(int i=0; i<256; i++){
        if(freq1[i]!=freq2[i]){
            printf("Not Anagrams\n");
            return 0;
        }
    }
    printf("Both string are anagrams.\n");
    return 0;
}






























/*#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);
    int n1=0;
    while(str1[n1]!='\0')
    {   
        n1++;
    }
    printf("The length of str1 : %d\n", n1);
    int n2=0;
    while(str2[n2]!='\0')
    {
        n2++;
    }
    printf("The length of str2 : %d\n", n2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("Not Anagrams\n");
    }
    for(int i=0; i<n1; i++){
        for(int j=0; j<n1-1-i; j++){
            if(str1[j]>str1[j+1]){
                char temp=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=temp;
            }
        }
    }
    printf("The reversed string is : %s\n", str1);
    for(int i=0; i<n2; i++){
        for(int j=0; j<n2-1-i; j++){
            if(str2[j]>str2[j+1]){
                char temp=str2[j];
                str2[j]=str2[j+1];
                str2[j+1]=temp;
            }
        }
    }
    printf("The reversed string is : %s\n", str2);
    if (strcmp(str1, str2) == 0)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}*/