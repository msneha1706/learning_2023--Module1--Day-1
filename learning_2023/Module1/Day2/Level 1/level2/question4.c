#include <stdio.h>

char* xstrchr(const char* str, char ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str; // Found the character, return pointer to its location
        }
        str++;
    }
    
    return NULL; // Character not found, return NULL
}

int main() {
    const char* str = "Hello, World!";
    char ch = 'o';
    
    char* result = xstrchr(str, ch);
    
    if (result != NULL) {
        printf("Character found at location: %ld\n", result - str);
    } else {
        printf("Character not found.\n");
    }
    
    return 0;
}