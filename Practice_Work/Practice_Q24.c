#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1 to 6): ");
    printf("\n1 = Monday\n2 = Tuesday\n3 = Wednesday\n4 = Thursday\n5 = Friday\n6 = Saturday\n");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday    : Mathematics, C Programming\n");
            break;
        case 2:
            printf("Tuesday   : Physics, Web Development\n");
            break;
        case 3:
            printf("Wednesday : Data Structures, Lab\n");
            break;
        case 4:
            printf("Thursday  : Operating System, C Programming\n");
            break;
        case 5:
            printf("Friday    : Database Management, Seminar\n");
            break;
        case 6:
            printf("Saturday  : Revision, Practical Work\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 6.\n");
    }

    return 0;
}
