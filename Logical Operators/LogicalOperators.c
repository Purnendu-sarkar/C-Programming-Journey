#include<stdio.h>
#include<stdbool.h>

int main() {
    int a = 10, b = 20;
    bool result;

    // Logical AND
    result = (a > 5) && (b < 30);
    printf("(%d > 5) && (%d < 30): %s\n", a, b, result ? "true" : "false");

    // Logical OR
    result = (a < 5) || (b < 30);
    printf("(%d < 5) || (%d < 30): %s\n", a, b, result ? "true" : "false");

    // Logical NOT
    result = !(a > b);
    printf("!(%d > %d): %s\n", a, b, result ? "true" : "false");

    return 0;
}