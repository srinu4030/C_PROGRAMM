//Write a C program to find the repeated character in a string.

#include<stdio.h>
int main(){
    char str[100];
    int visited[256]={0};
    printf("Enter the stirng : ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]; i++)
    {
        for(int j=i+1; str[j]; j++)
        {
            if(str[i]==str[j])
            {
                if(!visited[(unsigned char)str[i]])
                printf("%c\n", str[i]);
                visited[(unsigned char)str[i]]=1;
                
            }
            break;
        }   
    }
    return 0;
}