#include <stdio.h>

int main() {
    int month, year;

    // Input month and year
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Using If else ladder
    printf("\nUsing If else ladder:\n");
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Number of days = 31\n");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("Number of days = 30\n");
    else {
        // February, check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("Number of days = 29\n"); // Leap year
        else
            printf("Number of days = 28\n"); // Non-leap year
    }

    // Using logical operators
    printf("\nUsing logical operators:\n");
    int days;
    if (month < 1 || month > 12)
        printf("Invalid month\n");
    else {
        days = (month == 2) ? ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28) : (30 + (month + (month / 8)) % 2);
        printf("Number of days = %d\n", days);
    }

    return 0;
}

