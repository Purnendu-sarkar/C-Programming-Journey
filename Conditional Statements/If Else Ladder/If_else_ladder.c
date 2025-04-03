#include <stdio.h>

int main()
{
    int marks;
    // printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("Your Marks: %d\n", marks);

    if (marks >= 90)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: D\n");
    }
    else if (marks >= 50)
    {
        printf("Grade: E\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}
// This program takes the marks of a student as input and assigns a grade based on the marks.