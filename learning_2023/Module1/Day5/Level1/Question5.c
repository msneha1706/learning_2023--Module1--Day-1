#include <stdio.h>

typedef struct {
    int field1;
    char field2;
    float field3;
} MyStruct;

void swapFields(MyStruct *s1, MyStruct *s2) {
    MyStruct temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    MyStruct struct1, struct2;

    // Initialize struct1
    struct1.field1 = 10;
    struct1.field2 = 'A';
    struct1.field3 = 3.14;

    // Initialize struct2
    struct2.field1 = 20;
    struct2.field2 = 'B';
    struct2.field3 = 6.28;

    printf("Before swapping:\n");
    printf("Struct 1: %d %c %.2f\n", struct1.field1, struct1.field2, struct1.field3);
    printf("Struct 2: %d %c %.2f\n", struct2.field1, struct2.field2, struct2.field3);

    // Swap the fields
    swapFields(&struct1, &struct2);

    printf("\nAfter swapping:\n");
    printf("Struct 1: %d %c %.2f\n", struct1.field1, struct1.field2, struct1.field3);
    printf("Struct 2: %d %c %.2f\n", struct2.field1, struct2.field2, struct2.field3);

    return 0;
}

