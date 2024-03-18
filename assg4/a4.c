#include <stdio.h>

// Global variable to store error flag
int error_flag = 0;

// Function to perform division
float divide(float numerator, float denominator) {
    if (denominator == 0) {
        // Set error flag and return 0
        error_flag = 1;
        return 0;
    } else {
        return numerator / denominator;
    }
}

int main() {
    float num, den, result;

    printf("Enter numerator: ");
    scanf("%f", &num);

    printf("Enter denominator: ");
    scanf("%f", &den);

    // Perform division
    result = divide(num, den);

    // Check error flag
    if (error_flag) {
        printf("Error: Division by zero!\n");
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}

