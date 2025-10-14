// using the conditional operator

#include <stdio.h>
int main(){
    int age;
    printf("Enter the person age:");
    scanf("%d", &age);

    (age>=18)?printf("Age of a person %d so eligible for voting.\n", age):printf("Age of a person %d so not eligible for voting.\n", age);

    return 0;
}