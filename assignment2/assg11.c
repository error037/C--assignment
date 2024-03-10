#include <stdio.h>

int main() {
    float x, y;
    
    // Input the coordinates
    printf("Enter the coordinates (x, y): ");
    scanf("%f %f", &x, &y);
    
    // Check for special cases
    if (x == 0 && y == 0) {
        printf("The point lies on the origin.\n");
    } else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    } else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    } else {
        // Check the quadrant
        if (x > 0 && y > 0) {
            printf("The point lies in the first quadrant.\n");
        } else if (x < 0 && y > 0) {
            printf("The point lies in the second quadrant.\n");
        } else if (x < 0 && y < 0) {
            printf("The point lies in the third quadrant.\n");
        } else {
            printf("The point lies in the fourth quadrant.\n");
        }
    }
    
    return 0;
}

