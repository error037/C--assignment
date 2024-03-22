#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a. size_t strlen(const char* str);
size_t my_strlen(const char* str) {
    size_t length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// b. char* strcpy(char *dest, const char *src);
char* my_strcpy(char *dest, const char *src) {
    char *original_dest = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return original_dest;
}

// c. char* strcat(char *dest, const char *src);
char* my_strcat(char *dest, const char *src) {
    char *original_dest = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return original_dest;
}

// d. int strcmp(const char *str1, const char *str2);
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

// e. int stricmp(const char *str1, const char *str2);
int my_stricmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (tolower(*str1) != tolower(*str2)) {
            return tolower(*str1) - tolower(*str2);
        }
        str1++;
        str2++;
    }
    return tolower(*str1) - tolower(*str2);
}

// f. char* strrev(char* str);
char* my_strrev(char* str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return str;
}

// g. char* strchr(const char *str, int ch);
char* my_strchr(const char *str, int ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char *)str;
        }
        str++;
    }
    if (ch == '\0') {
        return (char *)str;
    }
    return NULL;
}

// h. char* strstr(const char *str, const char *substr);
char* my_strstr(const char *str, const char *substr) {
    while (*str != '\0') {
        const char *temp_str = str;
        const char *temp_substr = substr;
        while (*temp_substr != '\0' && *temp_str == *temp_substr) {
            temp_str++;
            temp_substr++;
        }
        if (*temp_substr == '\0') {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

int main() {
    const char *str1 = "Hello";
    const char *str2 = "World";
    char dest[20];

    // Testing strlen
    printf("Length of str1: %zu\n", my_strlen(str1));

    // Testing strcpy
    my_strcpy(dest, str1);
    printf("Copied string: %s\n", dest);

    // Testing strcat
    my_strcpy(dest, str1);
    my_strcat(dest, str2);
    printf("Concatenated string: %s\n", dest);

    // Testing strcmp
    printf("Comparison result: %d\n", my_strcmp(str1, str2));

    // Testing stricmp
    const char *str3 = "hello";
    const char *str4 = "HELLO";
    printf("Case-insensitive comparison result: %d\n", my_stricmp(str3, str4));

    // Testing strrev
    char str[] = "Reverse";
    printf("Reversed string: %s\n", my_strrev(str));

    // Testing strchr
    char ch = 'l';
    printf("Character '%c' found at: %s\n", ch, my_strchr(str1, ch));

    // Testing strstr
    const char *substr = "lo";
    printf("Substring '%s' found at: %s\n", substr, my_strstr(str1, substr));

    return 0;
}

