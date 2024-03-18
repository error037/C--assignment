#include <stdio.h>

void printUniquePairs(int num) {
    printf("Unique pairs whose product is %d:\n", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            int factor = num / i;
            if (factor >= i) {
                printf("%d * %d\n", i, factor);
            }
        }
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printUniquePairs(number);
    }

    return 0;
}

