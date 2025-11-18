//Write a C program to check whether a substring is present in a string.

#include<stdio.h>
#include<string.h>
int main(){
    int found=0;
    char str[100], substr[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the substring : ");
    fgets(substr, sizeof(substr), stdin);
    // Remove newline characters if present
    str[strcspn(str, "\n")] = '\0';
    substr[strcspn(substr, "\n")] = '\0';

    int n=strlen(str);
    int m=strlen(substr);
    for(int i=0; i<=n-m; i++)
    {
        int j;
        for(j=0; j<m; j++)
        {
            if(str[i+j]!=substr[j])
            {
                break;
            }    
        }
        if(j==m)
        {   
            found=1;
            break;
        }    
    }
    if (found)
        printf("Substring is present in the string.\n");
    else
        printf("Substring is NOT present in the string.\n");

    return 0;
}
    

    
