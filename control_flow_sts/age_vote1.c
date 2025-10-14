//using the if-else

#include <stdio.h>
int main(){
    int age;
    printf("Enter the person age:");
    scanf("%d", &age);

    if (age>=18)
    {
        printf(" Age of a person is %d ,Eligible for voting.\n", age);
    }
    else
    {
        printf(" Age of a perosn %d ,Not eligible for voting.\n",age);
    }
}