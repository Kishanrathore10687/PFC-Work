#include <stdio.h>

int main() {
    float acc1, acc2;

    printf("Enter first account balance: ");
    scanf("%f", &acc1);

    printf("Enter second account balance: ");
    scanf("%f", &acc2);

    printf("\nAre both balances equal?        : %d\n", acc1 == acc2);
    printf("Is first balance greater?       : %d\n", acc1 > acc2);
    printf("Is second balance greater?      : %d\n", acc2 > acc1);

    return 0;
}
