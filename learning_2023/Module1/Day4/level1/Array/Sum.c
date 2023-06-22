#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
	
	int i=0;
    int sum = 0;
    float average;

    // Calculate the sum of the array
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate the average
    average = (float)sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

