#include <stdio.h>

int main() {
    char c;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &c);

    // Check the category of the input character
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("ALPHABET\n");
        if (c >= 'A' && c <= 'Z')
            printf("UPPERCASE\n");
        else if (c >= 'a' && c <= 'z')
            printf("LOWERCASE\n");
    } else if (c >= '0' && c <= '9') {
        printf("DIGIT\n");
    } else if (c == ' ' || c == '\t' || c == '\n' || c == '\r') {
        printf("SPACE\n");
    } else {
        printf("OTHER\n");
    }

    return 0;
}

