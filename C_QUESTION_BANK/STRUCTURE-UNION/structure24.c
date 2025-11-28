/*Define a structure to represent a complex number with real and imaginary parts (both floats). Write 
a function to add two complex numbers represented by structures. */

#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex addComplex(struct Complex c1, struct Complex c2);

int main() {
    struct Complex c1, c2, sum;
    // Input first complex number
    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &c1.real, &c1.imag);
    // Input second complex number
    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);
    // Add the two complex numbers
    sum = addComplex(c1, c2);
    // Display result
    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
