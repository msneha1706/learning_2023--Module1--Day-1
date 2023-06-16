#include <stdio.h>

int main() {
    int rows;  
    printf("Enter value of n: ");
    scanf("%d", &rows);

    int i, j, k;

 
    for (i = rows; i >= 1; i--) {
        
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

       
        for (k = 1; k <= 2 * (rows - i); k++) {
            printf(" ");
        }

        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
