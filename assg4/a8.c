#include <stdio.h>

// Function to generate the next Fibonacci term
int nextFibonacciTerm() {
    static int a = 0, b = 1, nextTerm;

    nextTerm = a + b;
    a = b;
    b = nextTerm;

    return nextTerm;
}

int main() {
    int i, numTerms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &numTerms);

    printf("Fibonacci Series:\n");

    for (i = 0; i < numTerms; i++) {
        printf("%d ", nextFibonacciTerm());
    }

    printf("\n");

    return 0;
}

