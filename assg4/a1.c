#include <stdio.h>

unsigned long long calculateFactorial(int num) {
    unsigned long long factorial = 1;
    
    
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    int number;
    
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = calculateFactorial(number);
        printf("Factorial of %d is %llu.\n", number, result);
    }
    
    return 0;
}

