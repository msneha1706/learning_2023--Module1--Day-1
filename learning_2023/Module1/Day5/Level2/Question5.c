#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
} Student;

// Function to modify the structure members
void modifyStudent(Student *student) {
    // Modifying the structure members
    student->id = 100;
    strcpy(student->name, "John Doe");
}

// Function to create and initialize a student
Student* createStudent(int id, const char* name) {
    Student *student = (Student*)malloc(sizeof(Student));
    student->id = id;
    strcpy(student->name, name);
    return student;
}

int main() {
    // Create a student
    Student *myStudent = createStudent(42, "Alice");

    printf("Before modification: ID=%d, Name=%s\n", myStudent->id, myStudent->name);

    // Pass the pointer to the structure to the function
    modifyStudent(myStudent);

    printf("After modification: ID=%d, Name=%s\n", myStudent->id, myStudent->name);

    // Free the memory allocated for the student
    free(myStudent);

    return 0;
}

