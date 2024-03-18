#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate binomial coefficient C(n, k)
int binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to print Pascal's triangle
void printPascalTriangle(int numRows) {
    for (int row = 0; row < numRows; row++) {
        for (int space = 0; space < numRows - row - 1; space++) {
            printf(" ");
        }
        for (int col = 0; col <= row; col++) {
            printf("%4d", binomialCoeff(row, col));
        }
        printf("\n");
    }
}

int main() {
    int numRows;
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &numRows);

    printPascalTriangle(numRows);

    return 0;
}

