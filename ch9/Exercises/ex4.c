/*
4. Write a function day_of_year(month, day, year) that returns the day of the
year (an integer between 1 and 366) specified by the three arguments.
*/

#include <stdio.h>

int isLeap(int year);
int dayOfYear(int month, int day, int year);

int main(void) {

  printf("Enter data (month/day/year): ");
  int month, day, year;
  scanf("%d/%d/%d", &month, &day, &year);

  printf("The day is: %d\n", dayOfYear(month, day, year));

  return 0;
}

int isLeap(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfYear(int month, int day, int year) {

  int daysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int days = day  ;

  if (isLeap(year)) {
    daysInMonths[1] = 29;
  }

  for (int i = 0; i < month - 1; i++) {
    days+= daysInMonths[i];
  }

  return days;

}