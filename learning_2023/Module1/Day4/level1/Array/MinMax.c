#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

	int i;
    int min = arr[0]; // Assume the first element as the minimum
    int max = arr[0]; // Assume the first element as the maximum

    // Find the minimum and maximum values
    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}

