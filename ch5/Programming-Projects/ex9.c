/*
9. Write a program that prompts the user to enter two dates and then indicates which date
comes earlier on the calendar:
Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08
*/


#include <stdio.h>

int main(void) {

    printf("Enter first date (mm/dd/yy): ");
    int month1, day1, year1;
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd/yy): ");
    int month2, day2, year2;
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    else if (year2 < year1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    else if (month1 < month2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    else if (month2 < month1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    else if (day1 < day2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    else if (day2 < day1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    else
        printf("The two dates are equal.\n");


    return 0;
}