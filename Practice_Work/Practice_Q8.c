#include <stdio.h>

int main() {
    float balance;

    // Input initial balance
    printf("Enter initial bank balance: ");
    scanf("%f", &balance);

    printf("\nInitial Balance: %.2f\n", balance);

    // Apply interest (add amount)
    balance += 500;   // interest added
    printf("After adding interest (+= 500): %.2f\n", balance);

    // Apply service charges (subtract amount)
    balance -= 200;   // service charge deducted
    printf("After service charges (-= 200): %.2f\n", balance);

    // Apply bonus (multiply)
    balance *= 1.10;  // 10% bonus
    printf("After bonus (*= 1.10): %.2f\n", balance);

    // Apply division (split or adjustment)
    balance /= 2;     // divide balance
    printf("After division (/= 2): %.2f\n", balance);

    return 0;
}
