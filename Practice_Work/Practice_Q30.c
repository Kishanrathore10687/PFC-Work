#include <stdio.h>

// Function to calculate factorial using call by reference
void factorial(int n, int *fact) {
    *fact = 1;
    for (int i = 1; i <= n; i++) {
        *fact = (*fact) * i;
    }
}

int main() {
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num, &fact);

    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}
