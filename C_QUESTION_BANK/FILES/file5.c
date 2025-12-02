// Write a program that checks whether a file exists or not

#include<stdio.h>
#include<stdlib.h>
int main(){
    char filename[100];
    FILE *fp;
    printf("Enter the file name : ");
    scanf("%s", filename);

    fp=fopen(filename, "r");
    if(fp==NULL)
    {
        printf("File '%s' does not exist.\n", filename);
    }
    else{
        printf("File '%s' is exist.\n", filename);
    }
    fclose(fp);
    return 0;
}