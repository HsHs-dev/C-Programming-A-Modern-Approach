/*
10. Using the switch statement, write a program that converts a numerical grade into a letter
grade:
Enter numerical grade: 84
Letter grade: B
Use the following grading scale: A = 90–100, B = 80–89, C = 70–79, D = 60–69, F = 0–59.
Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
into two digits, then use a switch statement to test the ten’s digit.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("Enter a numerical grade: ");
    int grade;
    scanf("%d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Invalid grade.\n");
        exit(1);
    }
    
    grade /= 10;
    switch (grade) {

        case 10:
        case 9:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Letter grade: F\n");

    }


    return 0;
}