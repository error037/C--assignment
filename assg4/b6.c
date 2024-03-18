#include <stdio.h>

void printBinary(int num) {
    // Size of integer in bits
    int size = sizeof(int) * 8;
    
    // Mask to extract each bit
    int mask = 1 << (size - 1);
    
    // Loop through each bit and print 0 or 1
    for (int i = 0; i < size; i++) {
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }
        // Shift mask to the right
        mask >>= 1;
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Binary representation: ");
    printBinary(number);
    
    return 0;
}

