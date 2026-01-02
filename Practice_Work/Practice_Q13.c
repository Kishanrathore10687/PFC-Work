#include <stdio.h>

int main() {
    int color;

    printf("Enter color number:\n");
    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &color);

    switch (color) {
        case 1:
            printf("Red → Stop\n");
            break;
        case 2:
            printf("Yellow → Ready\n");
            break;
        case 3:
            printf("Green → Go\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
