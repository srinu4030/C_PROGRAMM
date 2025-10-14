/*#include<stdio.h>
int main(){
    int i=1;
    while(i<=10)
    {
        printf("%d\n", i);
        i++;    
    }
    return 0;
}


#include<stdio.h>
int main(){
    int i;
    for (int i=1; i<=10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
} */


#include<stdio.h>
int main(){
    int i=1;
    do
    {
        printf("%d\t", i);
        i=i+1;    
    }
    while (i<=10);
    printf("\n");
    return 0;
    
    
}