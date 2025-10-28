/*#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        if(i%3==0)
         {   printf("The number %d is divisible by 3.\n", i);
            printf("%d\n", i);
         }
    }
}*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        if(i%3!=0)
            continue;
        
        printf("%d\n", i);
    }
}