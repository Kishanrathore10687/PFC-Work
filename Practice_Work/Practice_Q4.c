#include <stdio.h>

int main() {
    int x;

    // Pre-increment example
    x = 5;
    printf("Using pre-increment (++x):\n");
    printf("Result = %d\n", ++x + 10);
    printf("Value of x after expression = %d\n\n", x);

    // Post-increment example
    x = 5;
    printf("Using post-increment (x++):\n");
    printf("Result = %d\n", x++ + 10);
    printf("Value of x after expression = %d\n", x);

    return 0;
}
