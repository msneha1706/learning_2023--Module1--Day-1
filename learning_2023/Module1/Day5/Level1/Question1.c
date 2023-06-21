#include <stdio.h>

typedef struct {
    float length;
    float width;
    float height;
} Box;

float calculateVolume(Box *b) {
    return b->length * b->width * b->height;
}

float calculateSurfaceArea(Box *b) {
    return 2 * (b->length * b->width + b->length * b->height + b->width * b->height);
}

int main() {
    Box box;
    Box *ptr = &box;
    
    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%f", &ptr->length);
    printf("Width: ");
    scanf("%f", &ptr->width);
    printf("Height: ");
    scanf("%f", &ptr->height);
    
    float volume = calculateVolume(ptr);
    float surfaceArea = calculateSurfaceArea(ptr);
    
    printf("\n");
    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);
    
    return 0;
}

