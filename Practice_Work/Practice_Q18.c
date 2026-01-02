#include <stdio.h>

int main() {
    float distance, total = 0;
    int day;

    for (day = 1; day <= 30; day++) {
        printf("Enter walking distance for day %d (in km): ", day);
        scanf("%f", &distance);
        total += distance;
    }

    printf("\nTotal distance walked in the month = %.2f km\n", total);

    return 0;
}
