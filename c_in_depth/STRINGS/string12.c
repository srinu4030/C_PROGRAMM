//Program to sort array of strings

#include<stdio.h>
#include<string.h>
#define N 5
#define LEN 10

int main(){
    char arr[N][LEN]={"white", "red", "green", "yellow", "blue"};
    char temp[10];
    int i,j;
    printf("Before sorting : \n");
    for(i=0; i<N; i++)
    {
        printf("%s  ", arr[i]);
    }
    //sorting
    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }

    }
    printf("\nAfter sorting : \n");
    for(i=0; i<N; i++)
    {
        printf("%s  ",arr[i]);
    }
    return 0;
}