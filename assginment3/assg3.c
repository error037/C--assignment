#include <stdio.h>

int main() {
    int number, sum = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    printf("The sum of digits of the integer is: %d\n", sum);

    return 0;
}

