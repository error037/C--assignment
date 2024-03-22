#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50] = "Hello";
    char str4[50] = "world";
    char str5[50] = "Hello World";
    char str6[50] = "olleH";
    char str7[50] = "Hello";
    char str8[50] = "World";
    char str9[50] = "Hello";
    char str10[50] = "World";

    // strlen()
    printf("Length of str1: %ld\n", strlen(str1));

    // stricmp()
    printf("stricmp(str2, str4): %d\n", stricmp(str2, str4)); // case insensitive comparison

    // strncpy()
    strncpy(str3, str5, 5);
    printf("After strncpy, str3: %s\n", str3);

    // strcpy()
    strcpy(str7, str8);
    printf("After strcpy, str7: %s\n", str7);

    // strrev()
    strrev(str6);
    printf("After strrev, str6: %s\n", str6);

    // strncat()
    strncat(str9, " ", 1);
    strncat(str9, str10, 5);
    printf("After strncat, str9: %s\n", str9);

    // strcat()
    strcat(str1, " ");
    strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);

    // strchr()
    printf("strchr(str5, 'W'): %s\n", strchr(str5, 'W'));

    // strncmp()
    printf("strncmp(str1, str2, 3): %d\n", strncmp(str1, str2, 3));

    // strcmp()
    printf("strcmp(str2, str4): %d\n", strcmp(str2, str4));

    // strstr()
    printf("strstr(str5, str8): %s\n", strstr(str5, str8));

    // strtok()
    char *token = strtok(str5, " ");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}

