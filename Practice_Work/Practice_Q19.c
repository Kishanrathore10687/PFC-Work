#include <stdio.h>

int main() {
    int attendance, presentCount = 0;

    for (int day = 1; day <= 30; day++) {
        printf("Enter attendance for day %d (1 = Present, 0 = Absent): ", day);
        scanf("%d", &attendance);

        if (attendance == 1) {
            presentCount++;
        }
    }

    printf("\nTotal number of days present = %d\n", presentCount);

    return 0;
}
