#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 11, 13}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int sumEven = 0;
    int sumOdd = 0;
    int i;

    // Calculate the sum of even and odd elements
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    int difference = sumEven - sumOdd;

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference: %d\n", difference);

    return 0;
}

