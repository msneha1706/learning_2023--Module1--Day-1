#include <stdio.h>

int charType(char ch) {
    if ((ch >= 'A' && ch <= 'Z'))
        return 1; // Uppercase alphabets
    else if (ch >= 'a' && ch <= 'z')
        return 2; // Lowercase alphabets
    else if (ch >= '0' && ch <= '9')
        return 3; // Digits
    else if (ch >= ' ' && ch <= '~')
        return 4; // Printable symbols
    else
        return 5; // Non-printable symbols
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    int type = charType(character);

    switch (type) {
        case 1:
            printf("Type: Uppercase Alphabet\n");
            break;
        case 2:
            printf("Type: Lowercase Alphabet\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable Symbol\n");
            break;
        case 5:
            printf("Type: Non-printable Symbol\n");
            break;
        default:
            printf("Invalid character\n");
    }

    return 0;
}

