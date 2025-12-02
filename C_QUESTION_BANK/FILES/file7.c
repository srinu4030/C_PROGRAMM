//Develop a C program that handles errors while opening files and prints appropriate error messages.

#include<stdio.h>
int main(){
    char filename[100];
    FILE *fp;
    printf("Enter the file name : ");
    scanf("%s", filename);
    fp=fopen(filename, "r");
    if(fp==NULL)
        // perror prints: message + system-generated error description
        perror("Errror opening file.\n");
    else
        printf("File opened successfully.\n");
    fclose(fp);
    return 0;        
}