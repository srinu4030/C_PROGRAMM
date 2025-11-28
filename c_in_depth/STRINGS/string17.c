//Program  to sort the string represenred by array of pointer

#include<stdio.h>
#include<string.h>
#define N 5
int main(){
    char *arrp[N]={"white", "red", "green", "yellow", "blue"};
    char *temp;
    int i, j;
    printf("Before sorting : \n");
    for(i=0; i<N; i++)
    {
        printf("%s  ", arrp[i]);
    }
    printf("\n");
    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(strcmp(arrp[i],arrp[j])>0)
            {
                temp=arrp[i];
                arrp[i]=arrp[j];
                arrp[j]=temp;
            }
        }
    }
    printf("After sorting : \n");
    for(i=0; i<N; i++)
    {
        printf("%s  ", arrp[i]);
    }
    return 0;
}