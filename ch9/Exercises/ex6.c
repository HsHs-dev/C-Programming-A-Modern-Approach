/*
6. Write a function digit(n, k) that returns the kth digit (from the right) in n
(a posi tive integer). For example, digit(829, 1) returns 9, digit(829, 2)
returns 2, and digit(829, 3) returns 8. If k is greater than the number of
digits in n, have the function return 0.
*/

#include <stdio.h>

int digit(int n, int k);

int main(void) {

  int num, dig;
  scanf("%d %d", &num, &dig);

  printf("%d\n", digit(num, dig));

  return 0;
}

int digit(int n, int k) {
  int digit = 0;
  for (int i = 0; i < k; i++) {
    digit = n % 10;
    n /= 10;
  }

  return digit;
}