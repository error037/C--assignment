#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Using if-else statements
    if (num1 >= num2 && num1 >= num3) {
        printf("Maximum number using if-else: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Maximum number using if-else: %d\n", num2);
    } else {
        printf("Maximum number using if-else: %d\n", num3);
    }
    
    // Using conditional operator
    int max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    printf("Maximum number using conditional operator: %d\n", max);

    return 0;
}

