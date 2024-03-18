#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    
    return 1; // Prime number
}

// Function to print prime numbers in a given range
void printPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int num;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    int start, end;
    printf("\nEnter the range to print prime numbers (start end): ");
    scanf("%d %d", &start, &end);
    printPrimesInRange(start, end);

    return 0;
}

