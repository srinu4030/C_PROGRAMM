//Create a C program to rename a file.

#include<stdio.h>
int main(){
    char oldName[100],newName[100];
    printf(" Enter the old file name : ");
    scanf("%s", oldName);
    printf("Enter the new file name : ");
    scanf("%s", newName);
    if(rename(oldName, newName)==0)
        printf("File renamed successfully.\n");
    else
        printf("Error :  Unable to rename the file.\n");
    return 0;
    
}