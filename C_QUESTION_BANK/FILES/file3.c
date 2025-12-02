//Develop a program to read a text file and count the number of words in it

#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *fp;
    char filename[100];
    char ch;
    int wordCount=0;
    int inWord=0;

    fp=fopen("file1.txt", "r");
    if(fp==NULL)
    {
        printf("Error:  Cannot open file .\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(isspace(ch))
            inWord=0;
        else
        {
            if(inWord==0)
            {
                wordCount++;
                inWord=1;
            }
        }    
    }
    fclose(fp);
    printf("Total number of words = %d\n", wordCount);
    return 0;
}



