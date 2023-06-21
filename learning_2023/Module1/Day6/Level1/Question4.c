#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 5

struct Student {
    char name[MAX_NAME_LENGTH];
    int marks;
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortStudents(struct Student students[], int numStudents) {
    int i, j;

    for (i = 0; i < numStudents - 1; i++) {
        for (j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

void displayStudents(struct Student students[], int numStudents) {
    int i;

    for (i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i+1);
        printf("  Name: %s\n", students[i].name);
        printf("  Marks: %d\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    struct Student students[MAX_STUDENTS] = {
        {"John", 85},
        {"Alice", 92},
        {"Michael", 76},
        {"Emily", 89},
        {"David", 81}
    };

    printf("Before sorting:\n");
    displayStudents(students, MAX_STUDENTS);

    sortStudents(students, MAX_STUDENTS);

    printf("After sorting:\n");
    displayStudents(students, MAX_STUDENTS);

    return 0;
}

