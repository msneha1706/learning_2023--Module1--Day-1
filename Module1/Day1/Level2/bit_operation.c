#include <stdio.h>

int bit_operations(int num, int oper_type, int pos) {
    switch (oper_type) {
        case 1:
            // Set 2 bits from nth bit position
            num |= (0x3 << pos);
            break;
        case 2:
            // Clear 3 bits from nth bit position
            num &= ~(0x7 << pos);
            break;
        case 3:
            // Toggle MSB
            num ^= (1 << 31);
            break;
        default:
            printf("Invalid operation type\n");
            break;
    }

    return num;
}

int main() {
    int num, oper_type, pos;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    int result = bit_operations(num, oper_type, pos);

    printf("Result: %d\n", result);

    return 0;
}

