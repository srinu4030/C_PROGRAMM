//functions with no arguments and no return values

#include<stdio.h>
void displaymenu(void);
int main(){
    int choice;
    displaymenu();
    printf("Enter your choice : ");
    scanf("%d", &choice);
    return 0;
}
void displaymenu(void)
{
    printf("1.Create database\n");
    printf("2.Insert new record\n");
    printf("3.Modify a record\n");
    printf("4.Delete a record\n");
    printf("5.Display all records\n");
    printf("6.Exit\n");
}

/*

//function with arguments nut no return values
#include <stdio.h>
void displaySum(int a, int b);  // Function declaration
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    displaySum(num1, num2);  // Function call with arguments
    return 0;
}
// Function definition
void displaySum(int a, int b)
{
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
}


//functiosn with no argguments but a return value
#include <stdio.h>
int getNumber();  // Function declaration
int main() {
    int num;
    num = getNumber();  // Function call and store returned value
    printf("You entered: %d\n", num);
    return 0;
}
// Function definition
int getNumber()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;   // Return the value to main()
}


//functions with arguments and retuen value

#include<stdio.h>
int sumoftwo(int a, int b);
int main(){
    int num1, num2, sum;
    printf("Enter the two numbers:");
    scanf("%d %d", &num1 ,&num2);
    sum=sumoftwo(num1, num2);
    printf("Sum of two number is :%d", sum);
    return 0;
}
int sumoftwo(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}*/
