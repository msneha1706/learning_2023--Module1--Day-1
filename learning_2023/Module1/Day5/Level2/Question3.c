#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    float marks;
} Student;

void read_student_data(Student students[], int n) {
	int i=0;
    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%f", &students[i].marks);
    }
}

float compute_average_marks(Student students[], int n) {
    float total_marks = 0.0;
    	int i=0;
    for (i = 0; i < n; i++) {
        total_marks += students[i].marks;
    }
    return total_marks / n;
}

void find_students_above_below_average(Student students[], int n, float average_marks, Student** above_average, Student** below_average) {
    int above_count = 0;
    int below_count = 0;
    	int i=0;

    // Count the number of students above and below average marks
    for (i = 0; i < n; i++) {
        if (students[i].marks > average_marks) {
            above_count++;
        } else if (students[i].marks < average_marks) {
            below_count++;
        }
    }

    // Allocate memory for above average students
    *above_average = (Student*)malloc(above_count * sizeof(Student));
    if (*above_average == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Allocate memory for below average students
    *below_average = (Student*)malloc(below_count * sizeof(Student));
    if (*below_average == NULL) {
        printf("Memory allocation failed.\n");
        free(*above_average);
        return;
    }

    int above_index = 0;
    int below_index = 0;
    	

    // Populate above and below average students
    for (i = 0; i < n; i++) {
        if (students[i].marks > average_marks) {
            (*above_average)[above_index++] = students[i];
        } else if (students[i].marks < average_marks) {
            (*below_average)[below_index++] = students[i];
        }
    }
}

void print_students(Student students[], int n, const char* label) {
    printf("%s\n", label);
    	int i=0;
    for (i = 0; i < n; i++) {
        printf("%s: %.2f\n", students[i].name, students[i].marks);
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for students
    Student* students = (Student*)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    read_student_data(students, n);
    float average_marks = compute_average_marks(students, n);

    Student* above_average;
    Student* below_average;

    find_students_above_below_average(students, n, average_marks, &above_average, &below_average);

    print_students(students, n, "All students:");
    printf("\n");
    print_students(above_average, n, "Students above average marks:");
    printf("\n");
    print_students(below_average, n, "Students below average marks:");

    // Free allocated memory
    free(students);
    free(above_average);
    free(below_average);

    return 0;
}

