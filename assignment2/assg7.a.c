#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year / 4 * 4 == year && year / 100 * 100 != year) || (year / 400 * 400 == year))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    return 0;
}

