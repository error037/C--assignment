#include <stdio.h>

void findMinMax(int arr[], int n, int *max, int *min) {
    // Initialize max and min with the first element of the array
    *max = arr[0];
    *min = arr[0];

    // Iterate through the array to find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 1, 8, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    findMinMax(arr, size, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

