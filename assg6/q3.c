#include <stdio.h>

void removeChar(char *str, char ch) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  // Add null terminator to mark end of modified string
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to remove: ");
    scanf("%c", &ch);

    // Remove the character
    removeChar(str, ch);

    printf("String after removing '%c': %s\n", ch, str);

    return 0;
}

