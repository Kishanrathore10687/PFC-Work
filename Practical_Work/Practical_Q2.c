#include <stdio.h>

int main() {
    int a, b, sum;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum
    sum = a + b;

    // Display sum
    printf("Sum = %d\n", sum);

    // Find largest number
    if (a > b) {
        printf("Largest number = %d\n", a);
    } else if (b > a) {
        printf("Largest number = %d\n", b);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
