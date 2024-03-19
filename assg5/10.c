#include <stdio.h>

// Function to perform linear search
int *linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return &arr[i];  // Return address of the element
        }
    }
    return NULL;  // Return NULL if element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int *result = linearSearch(arr, size, key);

    if (result != NULL) {
        printf("Element found at address: %p\n", (void *)result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

