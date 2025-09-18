/*
3. Write a function gcd(m, n) that calculates the greatest common divisor of
the integers m and n. (Programming Project 2 in Chapter 6 describes Euclid’s
algorithm for computing the GCD.)
*/

#include <stdio.h>

int gcd(int m, int n);

int main(void) {

  printf("Enter two integers: ");
  int n, m;
  scanf("%d %d", &n, &m);

  printf("Greatest common divisor: %d\n", gcd(m, n));


  return 0;
}

int gcd(int m, int n) {

  while (n != 0) {
    int remainder = m % n;
    m = n;
    n = remainder;
  }

  return m;
}