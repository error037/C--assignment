#include <stdio.h>

int main() {
    char choice;
    float num1, num2, result;

    do {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == '5') {
            printf("Exiting the program...\n");
            break;  // Exit the loop and end the program
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch(choice) {
            case '1':
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case '2':
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case '3':
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case '4':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != '5');

    return 0;
}

