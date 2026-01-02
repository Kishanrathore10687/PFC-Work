#include <stdio.h>

// Function to calculate total marks
int calculateTotal(int m1, int m2, int m3, int m4, int m5) {
    return m1 + m2 + m3 + m4 + m5;
}

// Function to calculate average
float calculateAverage(int total) {
    return total / 5.0;
}

// Function to display grade
void displayGrade(float avg) {
    if (avg >= 90)
        printf("Grade: A\n");
    else if (avg >= 80)
        printf("Grade: B\n");
    else if (avg >= 70)
        printf("Grade: C\n");
    else if (avg >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
}

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = calculateTotal(m1, m2, m3, m4, m5);
    average = calculateAverage(total);

    printf("\nTotal Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    displayGrade(average);

    return 0;
}
