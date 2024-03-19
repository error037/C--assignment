#include <stdio.h>

// Function to calculate maximum using a loop
int findMaxUsingLoop(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to calculate maximum using recursion
int findMaxUsingRecursion(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        int max = findMaxUsingRecursion(arr, size - 1);
        return (arr[size - 1] > max) ? arr[size - 1] : max;
    }
}

int main() {
    int arr[] = { 3, 7, 1, 9, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxLoop = findMaxUsingLoop(arr, size);
    int maxRecursion = findMaxUsingRecursion(arr, size);

    printf("Maximum using loop: %d\n", maxLoop);
    printf("Maximum using recursion: %d\n", maxRecursion);

    return 0;
}

