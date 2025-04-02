#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    float d, e, f;
    double g, h, i;
    long long int j, k, l;

    // Arithmetic operations
    a = 5 + 3; // Addition
    b = 5 - 3; // Subtraction
    c = 5 * 3; // Multiplication
    d = 5.0 / 3.0; // Division
    e = 5.0 / 3; // Division with float and int
    f = (float)5 / 3; // Type casting to float
    g = pow(2, 3); // Power function from math.h

    printf("Addition: %d\n", a);
    printf("Subtraction: %d\n", b);
    printf("Multiplication: %d\n", c);
    printf("Division (float): %.2f\n", d);
    printf("Division (float/int): %.2f\n", e);
    printf("Division (int/float): %.2f\n", f);
    printf("Power: %.2f\n", g);

    return 0;
}