//Write a program that reads a file line by line and prints each line along with its line number.

#include<stdio.h>
int main(){
    char filename[100];
    printf("Enter the file name : ");
    scanf("%s", filename);
    int lineNumber=1;
    char line[1000];
    FILE *fp;
    fp=fopen(filename, "r");
    if(fp==NULL)
    {
        perror("Error in file opening .\n");
        return 1;
    }
    while(fgets(line, sizeof(line), fp)!=NULL)
    {
        printf("%d:%s", lineNumber, line);
        ++lineNumber;
    }
    fclose(fp);
    return 0;
}