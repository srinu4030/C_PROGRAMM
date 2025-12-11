// Write a C program to read content from one file and write it to another file.

#include<stdio.h>
int main(){
    FILE *src, *dst;
    char ch;
    src=fopen("file.txt", "r");
    if(src==NULL){
        printf("Failed to open file.\n");
        return 1;
    }
    dst=fopen("file1.txt", "w");
    if(dst==NULL){
        printf("Cannot open the file.\n");
        fclose(src);
        return 1;
    }
    while(fscanf(src, "%c", &ch)==1){
        fprintf(dst, "%c", ch);
    }
    printf("File copied successfully.\n");
    return 0;
}