#include <stdio.h>

unsigned char setBit(unsigned char num, int pos) {
    unsigned char mask = (1 << pos);  // Create a mask with 1 at the given position
    return (num | mask);              // Perform bitwise OR operation to set the bit
}

unsigned char clearBit(unsigned char num, int pos) {
    unsigned char mask = ~(1 << pos); // Create a mask with 0 at the given position
    return (num & mask);              // Perform bitwise AND operation to clear the bit
}

unsigned char toggleBit(unsigned char num, int pos) {
    unsigned char mask = (1 << pos);  // Create a mask with 1 at the given position
    return (num ^ mask);              // Perform bitwise XOR operation to toggle the bit
}

int main() {
    unsigned char num = 0b01010101;   // Example 8-bit number: 85 in decimal or 0x55 in hexadecimal
    int bitPos = 2;                   // Bit position to set, clear, or toggle

    printf("Original number: %u\n", num);
    
    num = setBit(num, bitPos);
    printf("After setting bit %d: %u\n", bitPos, num);
    
    num = clearBit(num, bitPos);
    printf("After clearing bit %d: %u\n", bitPos, num);
    
    num = toggleBit(num, bitPos);
    printf("After toggling bit %d: %u\n", bitPos, num);

    return 0;
}