#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 11, 13}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int sumEvenIndex = 0;
    int sumOddIndex = 0;
    int i;

    // Calculate the sum of even-indexed and odd-indexed elements
    for (i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEvenIndex += arr[i];
        } else {
            sumOddIndex += arr[i];
        }
    }

    int difference = sumEvenIndex - sumOddIndex;

    printf("Sum of even-indexed elements: %d\n", sumEvenIndex);
    printf("Sum of odd-indexed elements: %d\n", sumOddIndex);
    printf("Difference: %d\n", difference);

    return 0;
}

