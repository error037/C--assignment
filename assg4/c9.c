#include <stdio.h>

// Function prototypes
int add(int a, int b, int *result);
int subtract(int a, int b, int *result);
int multiply(int a, int b, int *result);
int divide(int a, int b, int *result);

int main() {
    int num1, num2, result;
    char operator;

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform calculation based on operator
    int error = 0;
    switch (operator) {
        case '+':
            error = add(num1, num2, &result);
            break;
        case '-':
            error = subtract(num1, num2, &result);
            break;
        case '*':
            error = multiply(num1, num2, &result);
            break;
        case '/':
            error = divide(num1, num2, &result);
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    // Output result or error message
    if (error == 0) {
        printf("Result: %d\n", result);
    } else {
        printf("Error: Division by zero.\n");
    }

    return 0;
}

// Function to add two numbers
int add(int a, int b, int *result) {
    *result = a + b;
    return 0;  // No error
}

// Function to subtract two numbers
int subtract(int a, int b, int *result) {
    *result = a - b;
    return 0;  // No error
}

// Function to multiply two numbers
int multiply(int a, int b, int *result) {
    *result = a * b;
    return 0;  // No error
}

// Function to divide two numbers
int divide(int a, int b, int *result) {
    if (b == 0) {
        *result = 0;  // Set result to zero in case of division by zero
        return 1;     // Error code for division by zero
    } else {
        *result = a / b;
        return 0;  // No error
    }
}

