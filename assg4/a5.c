#include <stdio.h>

void printCharacter(char ch, int times) {
    for (int i = 0; i < times; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
    char character;
    int count;

    printf("Enter the character you want to print: ");
    scanf("%c", &character);

    printf("Enter the number of times to print the character: ");
    scanf("%d", &count);

    printCharacter(character, count);

    return 0;
}

