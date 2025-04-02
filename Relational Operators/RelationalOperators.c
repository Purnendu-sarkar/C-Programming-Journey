#include<stdio.h>
#include<stdbool.h>

int main() {
    int a = 10, b = 20;
    bool result;

    // Greater than
    result = a > b;
    printf("%d > %d: %s\n", a, b, result ? "true" : "false");

    // Less than
    result = a < b;
    printf("%d < %d: %s\n", a, b, result ? "true" : "false");

    // Greater than or equal to
    result = a >= b;
    printf("%d >= %d: %s\n", a, b, result ? "true" : "false");

    // Less than or equal to
    result = a <= b;
    printf("%d <= %d: %s\n", a, b, result ? "true" : "false");

    // Equal to
    result = a == b;
    printf("%d == %d: %s\n", a, b, result ? "true" : "false");

    // Not equal to
    result = a != b;
    printf("%d != %d: %s\n", a, b, result ? "true" : "false");

    return 0;
}