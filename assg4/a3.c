#include <stdio.h>


float calculate(float num1, float num2, char operator) {
    float result;
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 0; 
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 0; 
    }
    return result;
}

int main() {
    float operand1, operand2, result;
    char operator;

    printf("Enter first operand: ");
    scanf("%f", &operand1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter second operand: ");
    scanf("%f", &operand2);

    result = calculate(operand1, operand2, operator);

    printf("Result: %.2f\n", result);

    return 0;
}

