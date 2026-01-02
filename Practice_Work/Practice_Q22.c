#include <stdio.h>

int main() {
    int choice, num, i;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Print Multiplication Table\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);

            i = 1;
            do {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            } while (i <= 10);
        } 
        else if (choice == 0) {
            printf("Exiting program...\n");
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
