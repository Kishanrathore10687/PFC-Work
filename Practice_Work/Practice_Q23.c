#include <stdio.h>

int main() {
    int day;

    printf("Weekly Lecture Schedule:\n");

    for (day = 1; day <= 6; day++) {
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
        }
    }

    return 0;
}
