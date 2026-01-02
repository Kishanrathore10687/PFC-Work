#include <stdio.h>

int main() {
    int n, i;
    int num, sum = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < 0) {
            printf("Negative number skipped\n");
            continue;   // skip negative numbers
        }

        if (num == 0) {
            printf("Zero entered, stopping program\n");
            break;      // stop loop
        }

        sum += num;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
