#include <stdio.h>

void printBits(int num) {
    int i;
    int mask = 1 << 31;  // Start with the leftmost bit (MSB)

    for (i = 0; i < 32; i++) {
        int bit = (num & mask) ? 1 : 0;  // Check if the bit is set or not
        printf("%d", bit);

        if ((i + 1) % 8 == 0) {
            printf(" ");  // Print a space every 8 bits for better readability
        }

        mask >>= 1;  // Move the mask one bit to the right
    }
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits: ");
    printBits(num);
    printf("\n");

    return 0;
}

