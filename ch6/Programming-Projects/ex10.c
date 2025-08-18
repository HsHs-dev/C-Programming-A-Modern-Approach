/*
10. Programming Project 9 in Chapter 5 asked you to write a program that determines which of
two dates comes earlier on the calendar. Generalize the program so that the user may enter
any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:
Enter a date (mm/dd/yy): 3/6/08
Enter a date (mm/dd/yy): 5/17/07
Enter a date (mm/dd/yy): 6/3/07
Enter a date (mm/dd/yy): 0/0/0
5/17/07 is the earliest date
*/

#include "stdio.h"

int main(void) {

  printf("Enter a date (mm/dd/yy): ");
  int month = 0, day = 0, year = 0;
  scanf("%d/%d/%d", &month, &day, &year);

  int newMonth, newDay, newYear;
  while (1) {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &newMonth, &newDay, &newYear);

    if (newMonth == 0 && newDay == 0 && newYear == 0)
      break;

    if (newYear < year || (newYear == year && newMonth < month) ||
        (newYear == year && newMonth == month && newDay < day)) {
      year = newYear;
      month = newMonth;
      day = newDay;
    }
  }

  printf("%d/%d/%d is the earliest date\n", month, day, year);

}