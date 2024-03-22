#include <stdio.h>

int atoi(const char* string) {
    int result = 0;  // Initialize the result
    int sign = 1;    // Initialize sign as positive

    // Handle whitespaces
    while (*string == ' ' || *string == '\t' || *string == '\n')
        string++;

    // Handle optional sign
    if (*string == '+' || *string == '-') {
        sign = (*string == '-') ? -1 : 1;
        string++;
    }

    // Convert digit characters to numeric value
    while (*string >= '0' && *string <= '9') {
        result = result * 10 + (*string - '0');
        string++;
    }

    // Apply sign
    result *= sign;

    return result;
}

int main() {
    const char* str = "12345";
    int num = atoi(str);
    printf("Numeric value: %d\n", num);

    return 0;
}

