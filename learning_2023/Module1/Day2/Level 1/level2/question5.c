#include <stdio.h>

void encodeString(char* str) {
    while (*str != '\0') {
        *str += 5; // Shift each character by 5 positions
        str++;
    }
}

void decodeString(char* str) {
    while (*str != '\0') {
        *str -= 5; // Shift each character back by 5 positions
        str++;
    }
}

int main() {
    char originalString[] = "Hello, World!";
    char encodedString[100];

    // Encode the original string
    sprintf(encodedString, "%s", originalString);
    encodeString(encodedString);
    
    printf("Encoded string: %s\n", encodedString);

    // Decode the encoded string
    decodeString(encodedString);
    
    printf("Decoded string: %s\n", encodedString);
    
    return 0;
}