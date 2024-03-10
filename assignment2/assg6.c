#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;
    
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    
    // Store the original number for comparison later
    originalNum = num;
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum)
        printf("%d is a numeric palindrome.\n", originalNum);
    else
        printf("%d is not a numeric palindrome.\n", originalNum);
    
    return 0;
}

