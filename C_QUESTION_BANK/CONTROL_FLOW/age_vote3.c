//using the else-if ladder

#include <stdio.h>
int main(){
    int age;
    printf("Enter the person age:");
    scanf("%d", &age);

    if(age>18)
    {
        printf("yes eligible for voting.\n");
    }
    else if(age==18)
    {
        printf("Eligible for voting.\n");
    }
    else
    {
        printf("not eligible for voting.\n");
    }
    return 0;

}