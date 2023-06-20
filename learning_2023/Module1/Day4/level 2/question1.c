#include <stdio.h>

void decimalToBinary(unsigned int decimal) {
    unsigned int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary: ");
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%u", binary[j]);
        }
    }
    printf("\n");
}

void decimalToOctal(unsigned int decimal) {
    unsigned int octal[32];
    int i = 0;

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    printf("Octal: ");
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%u", octal[j]);
        }
    }
    printf("\n");
}

void decimalToHexadecimal(unsigned int decimal) {
    char hexadecimal[32];
    int i = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';  // Convert to ASCII character
        } else {
            hexadecimal[i] = remainder - 10 + 'A';  // Convert to hexadecimal character (A-F)
        }
        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal: ");
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", hexadecimal[j]);
        }
    }
    printf("\n");
}

int main() {
    unsigned int decimal = 255;  // Decimal number to convert

    printf("Decimal: %u\n", decimal);

    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHexadecimal(decimal);

    return 0;
}