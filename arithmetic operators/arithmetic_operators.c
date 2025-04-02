#include<stdio.h>
#include<math.h>

int main() {
    int a, b;


    scanf("%d %d", &a, &b); // Input two integers
    

    printf("Addition: %d\n", a + b); // Addition
    printf("Subtraction: %d\n", a - b); // Subtraction
    printf("Multiplication: %d\n", a * b); // Multiplication
    printf("Division: %.2f\n", (float)a / b); // Division with float
    printf("Power: %.2f\n", pow(a, b)); // Power function from math.h
    printf("Modulus: %d\n", a % b); // Modulus operation
    printf("Increment: %d\n", ++a); // Increment operation
    printf("Decrement: %d\n", --b); // Decrement operation


    return 0;
}