/*
1. Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
were repeated:
Enter a number: 939577
Repeated digit(s): 7 9
*/

/*
#include <stdbool.h>
#include <stdio.h>
int main(void)
{
 bool digit_seen[10] = {false};
 int digit;
 long n;
 printf("Enter a number: ");
 scanf("%ld", &n);
 while (n > 0) {
 digit = n % 10;
 if (digit_seen[digit])
 break;
 digit_seen[digit] = true;
 n /= 10;
 }
 if (n > 0)
 printf("Repeated digit\n");
 else
 printf("No repeated digit\n");
 return 0;
}
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

  printf("Repeated digit(s): ");

  for (int i = 0; i < DIGITS; i++) {
    if (seen[i] > 1) {
      putchar('0' + i);
    }
  }

  putchar('\n');

  return 0;
}