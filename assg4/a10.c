#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;  // Leap year
    } else {
        return 0;  // Not a leap year
    }
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (isLeapYear(year)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1;  // Invalid month
    }
}

int main() {
    int year, month;
    printf("Enter year: ");
    scanf("%d", &year);
    
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    
    int days = daysInMonth(month, year);
    if (days != -1) {
        printf("Number of days in month %d: %d\n", month, days);
    } else {
        printf("Invalid month entered.\n");
    }

    return 0;
}

