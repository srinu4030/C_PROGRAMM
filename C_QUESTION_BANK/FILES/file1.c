// Write a C program to read content from one file and write it to another file.

#include<stdio.h>
int main(){
    FILE *src,*dst;
    char ch;

    src=fopen("file1.txt", "r");
    if(src==NULL)
    {
        printf("Cannot open source file.\n");
        return 1;
    }
    dst=fopen("file2.txt", "w");
    if(dst==NULL)
    {
        printf("Cannot open the deestination file.\n");
        fclose(src);
        return 1;
    }
    while(fscanf(src, "%c", &ch)==1)
        fprintf(dst, "%c", ch);

    printf("File copied successfully.\n");
    fclose(src);
    fclose(dst);
    return 0;
}