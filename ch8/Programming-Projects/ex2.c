/*
2. Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
many times each digit appears in the number:
Enter a number: 41271092
Digit: 0 1 2 3 4 5 6 7 8 9
Occurrences: 1 2 2 0 1 0 0 1 0 1
*/

#include <stdio.h>

#define DIGITS 10

int main(void) {

  int seen[DIGITS] = {0};

  printf("Enter a number: ");
  long num;
  scanf("%ld", &num);

  int digit;
  while (num != 0) {
    digit = num % 10;
    seen[digit]++;
    num /= 10;
  }

  printf("Digit: \t\t");
  for (int i = 0; i < DIGITS; i++) {
    printf("%3d ", i);
  }
  putchar('\n');

  printf("Ocurrences: \t");

  for (int i = 0; i < DIGITS; i++) {
    printf("%3d ", seen[i]);
  }

  putchar('\n');

  return 0;
}