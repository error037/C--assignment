#include <stdio.h>

// Function to remove duplicate elements from an array
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int index = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[index++] = arr[i];
        }
    }
    arr[index++] = arr[n - 1];

    return index;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int uniqueCount = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of unique elements: %d\n", uniqueCount);

    return 0;
}

