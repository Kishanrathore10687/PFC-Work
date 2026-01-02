#include <stdio.h>

int main() {
    float usage, total = 0;
    int day;

    for (day = 1; day <= 7; day++) {
        printf("Enter electricity usage for day %d (in units): ", day);
        scanf("%f", &usage);
        total += usage;
    }

    printf("\nTotal electricity consumption for the week = %.2f units\n", total);

    return 0;
}
