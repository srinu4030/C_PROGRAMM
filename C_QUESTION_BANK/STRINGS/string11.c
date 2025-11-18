// Write a C program to sort a string array in ascending order

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    for(int i=0; str[i]; i++)
    {
        for(int j=i+1; str[j]; j++)
        {
            if(str[i]>str[j])
            {   
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("Sorted string is : %s\n", str);
    return 0;
}