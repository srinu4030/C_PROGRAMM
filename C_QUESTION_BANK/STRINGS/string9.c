//Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string :");
    scanf("%s", str);
    printf("The entered string is : ");
    puts(str);
    int vowels=0, consonants=0, others=0;

    for(int i=0; str[i]!='\0'; i++)
    {
        char ch=str[i];
        if(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch =='O' || ch=='U')
            vowels++;
        else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonants++;
        else
            others++;    
    }
    printf("The number of vowels is : %d\n", vowels);
    printf("The number of consonants is :%d\n", consonants);
    printf("OThers: %d\n", others);
    return 0;
}