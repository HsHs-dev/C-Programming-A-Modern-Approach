/*
11. The value of the mathematical constant e can be expressed as an infinite series:
e = 1 + 1/1! + 1/2! + 1/3! + …
Write a program that approximates e by computing the value of
1 + 1/1! + 1/2! + 1/3! + … + 1/n!
where n is an integer entered by the user.
*/

#include "stdio.h"

int factorial(int);

int main(void) {

  printf("Enter a number: ");
  int n;
  scanf("%d", &n);

  float e = 1;
  for (int i = 1; i <= n; i++) {
    e += 1.0f/factorial(i);
  }

  printf("e ≈ %f\n", e);

  return 0;

}

int factorial(int n) {

  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }

  return fact;

}