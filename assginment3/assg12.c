#include <stdio.h>


int power(int base, int index) {
    int result = 1;

    
    for (int i = 0; i < index; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, index;

    
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the index: ");
    scanf("%d", &index);

  
    int result = power(base, index);
    printf("%d raised to the power of %d is: %d\n", base, index, result);

    return 0;
}

