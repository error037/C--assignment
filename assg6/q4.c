#include <stdio.h>
#include <string.h>

void removeCharacters(char string1[], char string2[]) {
    int i, j, k;
    int len1 = strlen(string1);
    int len2 = strlen(string2);

    for (i = 0; i < len1; i++) {
        for (j = k = 0; j < len2; j++) {
            if (string2[j] != string1[i]) {
                string2[k++] = string2[j];
            }
        }
        string2[k] = '\0';
        len2 = k;
    }
}

int main() {
    char string1[] = "aeiou";  // Characters to remove
    char string2[] = "hello world";

    printf("Before removing characters: %s\n", string2);
    removeCharacters(string1, string2);
    printf("After removing characters: %s\n", string2);

    return 0;
}

