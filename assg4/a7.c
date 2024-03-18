#include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &terms);

    printFibonacci(terms);

    return 0;
}

