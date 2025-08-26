/*
11. Write a program that takes a first name and last name entered by the user and displays the
last name, a comma, and the first initial, followed by a period:
Enter a first and last name: Lloyd Fosdick
Fosdick, L.
The user’s input may contain extra spaces before the first name, between the first and last
names, and after the last name.
*/

#include "stdio.h"
#include "ctype.h"

int main(void) {

  printf("Enter a first and last name: ");
  // consume all the leading whitespace characters
  scanf(" ");

  char ch;
  while ((ch = getchar()) != ' ') {
    putchar(ch);
  }

  putchar(',');
  putchar(' ');

  scanf(" ");

  ch = toupper(getchar());
  putchar(ch);
  putchar('.');
  putchar('\n');

  return 0;
}