#include <stdio.h>

void decimalToBinary(int decimal) {
	int i=0;
    int binary[32];
    int index = 0;

    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }

    printf("Binary: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

void decimalToOctal(int decimal) {
    int octal[32];
    int index = 0;

    while (decimal > 0) {
        octal[index] = decimal % 8;
        decimal = decimal / 8;
        index++;
    }
    int i=0;

    printf("Octal: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

void decimalToHexadecimal(int decimal) {
    char hexadecimal[32];
    int index = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[index] = remainder + '0';
        } else {
            hexadecimal[index] = remainder + 'A' - 10;
        }
        decimal = decimal / 16;
        index++;
    }
    int i=0;

    printf("Hexadecimal: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHexadecimal(decimal);

    return 0;
}
