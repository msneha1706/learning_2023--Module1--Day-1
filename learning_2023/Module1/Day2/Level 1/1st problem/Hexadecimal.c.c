#include <stdio.h>

void printExponent(double num) {
    unsigned long long exponent;
    unsigned long long exponentBinary;


    unsigned long long *exponentPtr = (unsigned long long *)&num;
    exponent = (*exponentPtr >> 52) & 0x7FF;
    exponentBinary = (*exponentPtr >> 52) & 0x7FF;

    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
    printf("Exponent in binary: 0b");


    int i;
    for (i = 10; i >= 0; i--) {
        int bit = (exponentBinary >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    double x = 0.7;

    printf("Number: %f\n", x);
    printExponent(x);

    return 0;
}

