#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1000;

    while (divisor >= 1) {
        int newNumber = (num / divisor) * 1000 + (num % divisor);

        if (newNumber > largest) {
            largest = newNumber;
        }

        divisor /= 10;
    }

    return largest;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);

    printf("The largest number by deleting a single digit is: %d\n", largestNumber);

    return 0;
}

