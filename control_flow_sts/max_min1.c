//using else-if

#include<stdio.h>
int main(){
    int a, b;
    printf("enther the two numbers:");
    scanf("%d %d", &a, &b);

    if (a>b)
    {
        printf("Maximum=%d\n", a);
        printf("Minimum=%d\n", b);
        
    }
    else if(b>a)
    {
        printf("Maximum=%d\n", b);
        printf("Minimum=%d\n", a);
        
    }
    else
    {
        printf("They both are equal");
    }
}