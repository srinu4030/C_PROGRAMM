/* Define a union to represent the size of a product, which can be specified in centimeters, inches, or 
feet. Write a function to convert the size from one unit to another (e.g., centimeters to inches). */

#include <stdio.h>
union Size {
    float cm;
    float inch;
    float feet;
};
// Function to convert size
float convertSize(float value, char from, char to) {
    float cmValue;

    // Convert from input unit to cm first
    if (from == 'c') cmValue = value;
    else if (from == 'i') cmValue = value * 2.54;
    else if (from == 'f') cmValue = value * 30.48;
    else {
        printf("Invalid from unit!\n");
        return -1;
    }
    // Convert from cm to target unit
    if (to == 'c') return cmValue;
    else if (to == 'i') return cmValue / 2.54;
    else if (to == 'f') return cmValue / 30.48;
    else {
        printf("Invalid to unit!\n");
        return -1;
    }
}
int main() {
    union Size product;
    char fromUnit, toUnit;

    printf("Enter the unit of size you have (c = cm, i = inch, f = feet): ");
    scanf(" %c", &fromUnit);

    printf("Enter the size value: ");
    if (fromUnit == 'c') scanf("%f", &product.cm);
    else if (fromUnit == 'i') scanf("%f", &product.inch);
    else if (fromUnit == 'f') scanf("%f", &product.feet);

    printf("Convert to which unit? (c = cm, i = inch, f = feet): ");
    scanf(" %c", &toUnit);

    float inputValue;
    if (fromUnit == 'c') inputValue = product.cm;
    else if (fromUnit == 'i') inputValue = product.inch;
    else inputValue = product.feet;

    float result = convertSize(inputValue, fromUnit, toUnit);
    if (result != -1)
        printf("Converted value: %.2f %c\n", result, toUnit);

    return 0;
}
