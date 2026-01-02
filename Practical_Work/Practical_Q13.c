#include <stdio.h>

// Function to calculate square
int square(int n) {
    return n * n;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = square(num);

    printf("Square of %d = %d\n", num, result);

    return 0;
}
