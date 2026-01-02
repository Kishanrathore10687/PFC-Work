#include <stdio.h>

int main() {
    int i, j;

    /* (a) Rectangle: 7 columns, 4 rows */
    printf("(a) Rectangle (7 columns x 4 rows):\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 7; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (b) Square: 4 columns, 4 rows */
    printf("\n(b) Square (4 columns x 4 rows):\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (c) Right-angle triangle */
    printf("\n(c) Right-angle triangle (5 rows):\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (d) Reverse right-angle triangle */
    printf("\n(d) Reverse right-angle triangle (5 rows):\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (e) Central triangle (Pyramid) */
    printf("\n(e) Central triangle (5 rows):\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
