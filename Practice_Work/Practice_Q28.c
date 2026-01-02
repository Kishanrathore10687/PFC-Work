#include <stdio.h>

// Function to find maximum using pointers
int maximum(int *a, int *b) {
    if (*a > *b)
        return *a;
    else
        return *b;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Maximum number = %d\n", maximum(&x, &y));

    return 0;
}
