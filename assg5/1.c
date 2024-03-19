#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float average;

    // Accept marks for five subjects
    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Validate input marks (assuming marks are between 0 and 100)
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Marks should be between 0 and 100.\n");
            return 1;  // Exit program with an error code
        }

        total += marks[i];  // Calculate total
    }

    average = (float)total / 5;  // Calculate average

    // Display total and average marks
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}

