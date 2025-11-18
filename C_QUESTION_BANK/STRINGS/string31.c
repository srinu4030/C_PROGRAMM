//Write a program in C to split strings by space into words

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string :");
    fgets(str, sizeof(str), stdin);
    printf("\nWords:\n");

    for(int i=0; str[i]; i++)
    {
        if(str[i]==' ' || str[i]=='\0')
            printf("\n");
        else
            printf("%c", str[i]);    
    }
    return 0;
}
