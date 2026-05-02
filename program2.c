#include <stdio.h>

void main()
{
    int marks;

    printf("Enter the student's marks (0 to 100): ");

    if (scanf("%d", &marks) != 1 || marks < 0 || marks > 100)
        printf("Invalid marks! Please enter a number between 0 and 100.\n");
    else if (marks >= 90)
        printf("Grade: A\n");
    else if (marks >= 75)
        printf("Grade: B\n");
    else if (marks >= 60)
        printf("Grade: C\n");
    else if (marks >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
}