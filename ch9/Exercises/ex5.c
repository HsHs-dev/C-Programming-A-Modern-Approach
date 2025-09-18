/*
5. Write a function num_digits(n) that returns the number of digits in n (a
positive integer). Hint: To determine the number of digits in a number n,
divide it by 10 repeatedly. When n reaches 0, the number of divisions indicates
how many digits n originally had.
*/

#include <stdio.h>

int num_digits(int n);

int main(void) {

  printf("Enter a number: ");
  int num;
  scanf("%d", &num);
  printf("The number has %d digits\n", num_digits(num));

  return 0;
}

int num_digits(int n) {
  int digits = 0;
  while(n != 0) {
    digits++;
    n /= 10;
  }

  return digits;
}