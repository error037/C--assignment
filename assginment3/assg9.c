#include <stdio.h>

int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int no1, no2;
    
    printf("Enter the first number: ");
    scanf("%d", &no1);
    
    printf("Enter the second number: ");
    scanf("%d", &no2);
    
    int result = gcd(no1, no2);
    printf("GCD of %d and %d is %d\n", no1, no2, result);
    
    return 0;
}

