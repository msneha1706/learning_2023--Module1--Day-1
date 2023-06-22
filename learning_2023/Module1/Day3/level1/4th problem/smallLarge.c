#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int i;
    int smallestDigit = 9;
    int largestDigit = 0;

    for (i = 0; i < n; i++) {
        int currentNumber = numbers[i];

        while (currentNumber > 0) {
            int digit = currentNumber % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            currentNumber /= 10;
        }
    }

    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid value of n. Exiting...\n");
        return 0;
    }

    int numbers[n];

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}

