#include <stdio.h>

int main() {
    // Constants
    const float unit_price = 5.0;
    const float discount_30 = 0.1;
    const float discount_50 = 0.15;

    // Variables
    int quantity;
    float total_price;

    // Input
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    // Calculate total price
    if (quantity <= 30) {
        total_price = quantity * unit_price;
    } else if (quantity <= 50) {
        total_price = quantity * unit_price * (1 - discount_30);
    } else {
        total_price = quantity * unit_price * (1 - discount_50);
    }

    // Output
    printf("Total price: Rs %.2f\n", total_price);

    return 0;
}

