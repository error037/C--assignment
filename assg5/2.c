#include <stdio.h>

// Function to accept array elements from the user
void acceptArrayElements(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to print array elements
void printArrayElements(int arr[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Accept array elements from the user
    acceptArrayElements(arr, size);

    // Print array elements
    printArrayElements(arr, size);

    return 0;
}

