/* Accept any two numbers, if the first number is greater than second then print the difference
 of these two numbers, otherwise print their sum. Write this program using a ternary operator.*/

#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the number: ");
    scanf("%d %d", &num1, &num2);

    (num1>num2)?printf("Difference : %d\n",num1-num2):printf("Sum is : %d\n", num1+num2);
    return 0;
} 
