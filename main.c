#include <stdio.h>

void inputMarks(int marks[], int size);
int calculateTotal(int marks[], int size);
float calculateAverage(int total, int size);
char calculateGrade(float average);

int main() {
    int marks[5];
    int total;
    float average;
    char grade;

    inputMarks(marks, 5);
    total = calculateTotal(marks, 5);
    average = calculateAverage(total, 5);
    grade = calculateGrade(average);

    printf("\n--- Result ---\n");
    printf("Total Marks: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}

void inputMarks(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

int calculateTotal(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

float calculateAverage(int total, int size) {
    return (float)total / size;
}

char calculateGrade(float average) {
    if (average >= 90)
        return 'A';
    else if (average >= 75)
        return 'B';
    else if (average >= 60)
        return 'C';
    else if (average >= 50)
        return 'D';
    else
        return 'F';
}