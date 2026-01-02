#include <stdio.h>

int main() {
    int i = 10;
    float f = 25.75f;
    char c = 'A';
    double d = 123.456789;

    printf("Integer value = %d\n", i);
    printf("Size of int = %zu bytes\n\n", sizeof(i));

    printf("Float value = %.2f\n", f);
    printf("Size of float = %zu bytes\n\n", sizeof(f));

    printf("Character value = %c\n", c);
    printf("Size of char = %zu bytes\n\n", sizeof(c));

    printf("Double value = %lf\n", d);
    printf("Size of double = %zu bytes\n", sizeof(d));

    return 0;
}
