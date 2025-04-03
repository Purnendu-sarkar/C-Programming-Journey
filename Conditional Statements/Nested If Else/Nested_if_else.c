#include<stdio.h>

int main() {
    int age;
    char gender;

    // Prompt for age and take input
    // printf("Enter your age: ");
    scanf("%d", &age);
    printf("You entered age: %d\n", age);

    if (age >= 18) {
        // Prompt for gender and take input
        // printf("Enter your gender (M/F): ");
        scanf(" %c", &gender);
        printf("You entered gender: %c\n", gender);

        // Check gender and print appropriate message
        if (gender == 'M' || gender == 'm') {
            printf("You are an adult male.\n");
        } else if (gender == 'F' || gender == 'f') {
            printf("You are an adult female.\n");
        } else {
            printf("Invalid gender input.\n");
        }
    } else {
        // Check if minor or invalid age
        if (age > 0) {
            printf("You are a minor.\n");
        } else {
            printf("Invalid age input.\n");
        }
    }

    return 0;
}