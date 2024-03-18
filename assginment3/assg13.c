#include <stdio.h>

int main() {
    int n, i;
    unsigned long long int fib1 = 0, fib2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%llu, ", fib1);
        nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;
    }

    printf("\n");

    return 0;
}

