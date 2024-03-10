#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using if-else
    if (num1 > num2) {
        printf("Maximum using if-else: %d\n", num1);
    } else {
        printf("Maximum using if-else: %d\n", num2);
    }

    // Using conditional operator
    int max = (num1 > num2) ? num1 : num2;
    printf("Maximum using conditional operator: %d\n", max);

    return 0;
}

