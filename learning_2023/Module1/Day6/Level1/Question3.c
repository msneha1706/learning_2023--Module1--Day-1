#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct Person {
    char name[MAX_NAME_LENGTH];
    int age;
    float height;
};

void displayPeople(struct Person people[], int numPeople) {
    int i;

    for (i = 0; i < numPeople; i++) {
        printf("Person %d:\n", i+1);
        printf("  Name: %s\n", people[i].name);
        printf("  Age: %d\n", people[i].age);
        printf("  Height: %.2f\n", people[i].height);
        printf("\n");
    }
}

int main() {
    struct Person people[5];

    // Assume the array of structures is already populated with data

    displayPeople(people, 5);

    return 0;
}

