#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c, d, e, g;
    float f;

    // Assignment operations
    // a = 5; // Assign 5 to a
    // b = 3; // Assign 3 to b


    scanf("%d %d", &a, &b); // Input two integers


    c = a + b; // Assign the sum of a and b to c
    d = a - b; // Assign the difference of a and b to d
    e = a * b; // Assign the product of a and b to e
    f = (float)a / b; // Assign the quotient of a and b to f
    g = a % b; // Assign the remainder of a divided by b to g

    printf("Addition: %d\n", c); // Print the result of addition
    printf("Subtraction: %d\n", d); // Print the result of subtraction  
    printf("Multiplication: %d\n", e); // Print the result of multiplication
    printf("Division: %.2f\n", f); // Print the result of division
    printf("Modulus: %d\n", g); // Print the result of modulus


    return 0;
}


/*
a = 5; // Assign 5 to a
b = 3; // Assign 3 to b 

Assignment operations
 = 
*/