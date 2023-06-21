#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 20
#define MAX_STUDENTS 10

struct Student {
    int rollno;
    char name[MAX_NAME_LENGTH];
    float marks;
};

void parseInputString(const char* input, struct Student students[], int* numStudents) {
    char rollnoStr[10];
    char name[MAX_NAME_LENGTH];
    char marksStr[10];

    int offset = 0;

    while (sscanf(input + offset, "%s %s %s", rollnoStr, name, marksStr) == 3) {
        students[*numStudents].rollno = atoi(rollnoStr);
        strncpy(students[*numStudents].name, name, MAX_NAME_LENGTH);
        students[*numStudents].marks = atof(marksStr);

        (*numStudents)++;

        offset += strlen(rollnoStr) + strlen(name) + strlen(marksStr) + 3; // Add 3 for the spaces
    }
}

void displayStudents(struct Student students[], int numStudents) {
	int i=0;
    for (i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Roll No: %d\n", students[i].rollno);
        printf("  Name: %s\n", students[i].name);
        printf("  Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    const char* inputString = "1001 Aron 100.00 1002 Bob 90.50 1003 Cindy 95.75";

    struct Student students[MAX_STUDENTS];
    int numStudents = 0;

    parseInputString(inputString, students, &numStudents);

    displayStudents(students, numStudents);

    return 0;
}

