#include <stdio.h>

void printExponent(double x) {
	int i=0;
    unsigned long long* ptr = (unsigned long long*)&x;
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52;

    printf("Exponent in hexadecimal: 0x%llx\n", exponent);
    printf("Exponent in binary: 0b");
    for (i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}

