#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct Person {
    char name[MAX_NAME_LENGTH];
    int age;
    float height;
};

void initializePeople(struct Person people[], int numPeople) {
    int i;

    for (i = 0; i < numPeople; i++) {
        // Set the name to an empty string
        memset(people[i].name, '\0', sizeof(people[i].name));

        // Set the age and height to zero
        people[i].age = 0;
        people[i].height = 0.0;
    }
}

int main() {
    struct Person people[5];
    int i=0;

    initializePeople(people, 5);

    // Print the initialized values
    for ( i = 0; i < 5; i++) {
        printf("Person %d: Name: %s, Age: %d, Height: %.2f\n", i+1, people[i].name, people[i].age, people[i].height);
    }

    return 0;
}

