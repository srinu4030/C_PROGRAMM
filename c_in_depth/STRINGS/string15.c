//allocate memory through malloc()

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *arrp[10], str[20];
    int i;
    for(i=0; i<10; i++)
    {
        printf("Enter sstring %d : ", i+1);
        //gets(str);
        fgets(str, sizeof(str), stdin);
        //allocate memory for the string
        arrp[i]=(char*)malloc(strlen(str)+1);
        //copy string into allocated memory
        strcpy(arrp[i], str);
    }
    printf("\n You entered :\n");
    for(i=0; i<10; i++)
    {
        printf("%s\t", arrp[i]);
    }
    printf("\n");
    //free allocated memory
    for(i=0; i<10; i++)
    {
        free(arrp[i]);
    }
    return 0;
}