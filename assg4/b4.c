#include <stdio.h>

// Function prototypes
int fibonacciNthTerm(int n);
void printFibonacciSeries(int terms);

// Recursive function to calculate nth term of Fibonacci series
int fibonacciNthTerm(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacciNthTerm(n - 1) + fibonacciNthTerm(n - 2);
    }
}

// Function to print given number of terms of Fibonacci series
void printFibonacciSeries(int terms) {
    int i;
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacciNthTerm(i));
    }
    printf("\n");
}

int main() {
    int n, terms;

    printf("Enter the value of n to find nth term of Fibonacci series: ");
    scanf("%d", &n);

    // Calculate and print nth term of Fibonacci series
    int nthTerm = fibonacciNthTerm(n);
    printf("The %dth term of Fibonacci series is: %d\n", n, nthTerm);

    printf("Enter the number of terms to print in Fibonacci series: ");
    scanf("%d", &terms);

    // Print given number of terms of Fibonacci series
    printf("Fibonacci series with %d terms is:\n", terms);
    printFibonacciSeries(terms);

    return 0;
}

