#include <stdio.h>
#include <stdbool.h>

#define BOX_SIZE 4 

int compareBoxes(int box1[], int box2[]) {
    int count[BOX_SIZE + 1] = {0}; 
    
  
    for (int i = 0; i < BOX_SIZE; i++) {
        count[box1[i]]++;
    }
    
   
    for (int i = 0; i < BOX_SIZE; i++) {
        if (count[box2[i]] == 0) {
            return 0; 
        }
        count[box2[i]]--;
    }
 
    for (int i = 1; i <= BOX_SIZE; i++) {
        if (count[i] != 0) {
            return 0; 
        }
    }
    
    return 1; 
}

int main() {
    int box1[] = {1, 2, 3, 4};
    int box2[] = {2, 1, 4, 3};
    
    int result = compareBoxes(box1, box2);
    
    printf("Result: %d\n", result);
    
 return 0;
}