//Implement a function pointer callback

#include<stdio.h>
int sum(int a, int b);
int sub(int a, int b);
int display(int (*fptr)(int, int), int a, int b);

int main() {
    int a = 20, b = 10;

    display(sum, a, b);
    display(sub, a, b);

    return 0;
}

int sum(int a, int b) {
    printf("%d\n", a + b);
    return a + b;
}

int sub(int a, int b) {
    printf("%d\n", a - b);
    return a - b;
}

int display(int (*fptr)(int, int), int a, int b) {
    // just call the function using the pointer
    return fptr(a, b);
}
