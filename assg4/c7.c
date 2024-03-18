#include <stdio.h>

// Global variables for storing sum and product
int sum = 0;
int product = 1;

// Function to calculate sum and product
void calculate(int num) {
    sum += num;
    product *= num;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        calculate(numbers[i]);
    }

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}

