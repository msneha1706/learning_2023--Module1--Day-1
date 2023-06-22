#include <stdio.h>

void decimalToBCD(unsigned int decimal, unsigned char *bcd) {
    unsigned int quotient = decimal;
    unsigned char remainder;
    int i = 0;

    while (quotient != 0) {
        remainder = quotient % 10;  // Get the least significant digit
        bcd[i] = remainder;         // Store the digit in the BCD array
        quotient = quotient / 10;   // Update the quotient by removing the least significant digit
        i++;
    }

    // Reverse the BCD array to get the BCD representation in correct order
    int j, k;
    for (j = 0, k = i - 1; j < k; j++, k--) {
        unsigned char temp = bcd[j];
        bcd[j] = bcd[k];
        bcd[k] = temp;
    }
}

int main() {
    unsigned int decimal = 254;       // Decimal number to convert to BCD
    unsigned char bcd[4];             // BCD array to store the result

    decimalToBCD(decimal, bcd);

    printf("Decimal: %u\n", decimal);
    printf("BCD: ");
    int i=0;
    for (i = 0; i < sizeof(bcd); i++) {
        printf("%u", bcd[i]);
    }
    printf("\n");

    return 0;
}
