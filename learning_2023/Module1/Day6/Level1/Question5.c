#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 5

struct Student {
    char name[MAX_NAME_LENGTH];
    int marks;
};

int searchStudentByName(struct Student students[], int numStudents, const char* name) {
    int i;

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;  // Found the student at index i
        }
    }

    return -1;  // Student not found
}

void displayStudent(struct Student student) {
    printf("Student:\n");
    printf("  Name: %s\n", student.name);
    printf("  Marks: %d\n", student.marks);
    printf("\n");
}

int main() {
    struct Student students[MAX_STUDENTS] = {
        {"John", 85},
        {"Alice", 92},
        {"Michael", 76},
        {"Emily", 89},
        {"David", 81}
    };

    const char* searchName = "Michael";

    int index = searchStudentByName(students, MAX_STUDENTS, searchName);

    if (index != -1) {
        printf("Student found at index %d:\n", index);
        displayStudent(students[index]);
    } else {
        printf("Student not found.\n");
    }

    return 0;
}

