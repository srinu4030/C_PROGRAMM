/*.Can you swap two variables without using a temporary variable? Show the code.*/

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swap a=%d, b=%d\n", a, b);
    return 0;
}

/* a = a + b;   // a = 15
    b = a - b;   // b = 15 - 10 = 5
    a = a - b;   // a = 15 - 5 = 10 */