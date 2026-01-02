#include <stdio.h>

int main() {
    int choice = 1, num, i;

    while (choice != 0) {
        printf("\n--- MENU ---\n");
        printf("1. Print Multiplication Table\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);

            i = 1;
            while (i <= 10) {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        } 
        else if (choice == 0) {
            printf("Exiting program...\n");
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
