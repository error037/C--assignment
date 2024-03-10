#include <stdio.h>

int main() {
    float num1, num2, result;

    // Accepting input from user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Checking if the divider is zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed\n");
    } else {
        // Performing division if the divider is not zero
        result = num1 / num2;
        printf("Division result: %.2f\n", result);
    }

    return 0;
}

