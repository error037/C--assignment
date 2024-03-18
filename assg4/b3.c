#include <stdio.h>

// Function prototype
int gcd(int a, int b);

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    // Call the gcd function and print the result
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}

