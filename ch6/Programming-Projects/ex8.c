/*
8. Write a program that prints a one-month calendar. The user specifies the number of days in
the month and the day of the week on which the month begins:
Enter number of days in month: 31
Enter starting day of the week (1=Sun, 7=Sat): 3
       1  2  3  4  5
 6  7  8  9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30 31
Hint: This program isn’t as hard as it looks. The most important part is a for statement that
uses a variable i to count from 1 to n, where n is the number of days in the month, printing
each value of i. Inside the loop, an if statement tests whether i is the last day in a week; if
so, it prints a new-line character.
*/

#include "stdio.h"

int main(void) {

  printf("Enter number of days in month: ");
  int num_of_days;
  scanf("%d", &num_of_days);

  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  int start;
  scanf("%d", &start);

  for (int i = 1; i < start; i++) {
    printf("   ");
  }

  for (int i = 1, end = start; i <= num_of_days; i++, end++) {

    if (end == 8) {
      printf("\n");
      end = 1;
    }

    printf("%3d", i);

  }

  printf("\n");

  return 0;
}