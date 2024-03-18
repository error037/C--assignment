#include <stdio.h>

// Function prototype
int power(int base, int exponent);

int main() {
    int base, exponent;
    
    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Call the power function and print the result
    int result = power(base, exponent);
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);
    
    return 0;
}

// Function definition for power calculation using recursion
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Any number raised to the power of 0 is 1
    } else if (exponent == 1) {
        return base; // Any number raised to the power of 1 is the number itself
    } else {
        return base * power(base, exponent - 1); // Recursively calculate the power
    }
}

